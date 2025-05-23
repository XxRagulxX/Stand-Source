#include "StateSaver.hpp"

namespace Stand
{
	StateSaver::StateSaver() :
		m_savedState(false),
		m_featureLevel(D3D_FEATURE_LEVEL_11_0),
		m_pContext(NULL),
		m_primitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_UNDEFINED),
		m_pInputLayout(NULL),
		m_pBlendState(NULL),
		m_sampleMask(0xffffffff),
		m_pDepthStencilState(NULL),
		m_stencilRef(0),
		m_pRasterizerState(NULL),
		m_pPSSRV(NULL),
		m_pSamplerState(NULL),
		m_pVS(NULL),
		m_numVSClassInstances(0),
		m_pVSConstantBuffer(NULL),
		m_pGS(NULL),
		m_numGSClassInstances(0),
		m_pGSConstantBuffer(NULL),
		m_pGSSRV(NULL),
		m_pPS(NULL),
		m_numPSClassInstances(0),
		m_pHS(NULL),
		m_numHSClassInstances(0),
		m_pDS(NULL),
		m_numDSClassInstances(0),
		m_pVB(NULL),
		m_vertexStride(0),
		m_vertexOffset(0),
		m_pIndexBuffer(NULL),
		m_indexFormat(DXGI_FORMAT_UNKNOWN),
		m_indexOffset(0)
	{
		for (int i = 0; i < 4; ++i)
		{
			m_blendFactor[i] = 0.0f;
		}
		for (int i = 0; i < 256; ++i)
		{
			m_pVSClassInstances[i] = NULL;
			m_pGSClassInstances[i] = NULL;
			m_pPSClassInstances[i] = NULL;
			m_pHSClassInstances[i] = NULL;
			m_pDSClassInstances[i] = NULL;
		}
	}

	// Destruct
	StateSaver::~StateSaver()
	{
		releaseSavedState();
	}

	// Save all states that are changed by the font-wrapper when drawing a string
	void StateSaver::saveCurrentState(ID3D11Device* pDevice, ID3D11DeviceContext* pContext)
	{
		if (m_savedState)
		{
			releaseSavedState();
		}

		m_featureLevel = pDevice->GetFeatureLevel();

		pContext->AddRef();
		m_pContext = pContext;

		m_pContext->IAGetPrimitiveTopology(&m_primitiveTopology);
		m_pContext->IAGetInputLayout(&m_pInputLayout);

		m_pContext->OMGetBlendState(&m_pBlendState, m_blendFactor, &m_sampleMask);
		m_pContext->OMGetDepthStencilState(&m_pDepthStencilState, &m_stencilRef);

		m_pContext->RSGetState(&m_pRasterizerState);

		m_numVSClassInstances = 256;
		m_pContext->VSGetShader(&m_pVS, m_pVSClassInstances, &m_numVSClassInstances);
		m_pContext->VSGetConstantBuffers(0, 1, &m_pVSConstantBuffer);

		m_numPSClassInstances = 256;
		m_pContext->PSGetShader(&m_pPS, m_pPSClassInstances, &m_numPSClassInstances);
		m_pContext->PSGetShaderResources(0, 1, &m_pPSSRV);
		pContext->PSGetSamplers(0, 1, &m_pSamplerState);

		if (m_featureLevel >= D3D_FEATURE_LEVEL_10_0)
		{
			m_numGSClassInstances = 256;
			m_pContext->GSGetShader(&m_pGS, m_pGSClassInstances, &m_numGSClassInstances);
			m_pContext->GSGetConstantBuffers(0, 1, &m_pGSConstantBuffer);

			m_pContext->GSGetShaderResources(0, 1, &m_pGSSRV);

			if (m_featureLevel >= D3D_FEATURE_LEVEL_11_0)
			{
				m_numHSClassInstances = 256;
				m_pContext->HSGetShader(&m_pHS, m_pHSClassInstances, &m_numHSClassInstances);

				m_numDSClassInstances = 256;
				m_pContext->DSGetShader(&m_pDS, m_pDSClassInstances, &m_numDSClassInstances);
			}
		}

		m_pContext->IAGetVertexBuffers(0, 1, &m_pVB, &m_vertexStride, &m_vertexOffset);

		m_pContext->IAGetIndexBuffer(&m_pIndexBuffer, &m_indexFormat, &m_indexOffset);

		m_savedState = true;
	}

	// Restore state
	void StateSaver::restoreSavedState()
	{
		if (m_savedState)
		{
			m_pContext->IASetPrimitiveTopology(m_primitiveTopology);
			m_pContext->IASetInputLayout(m_pInputLayout);

			m_pContext->OMSetBlendState(m_pBlendState, m_blendFactor, m_sampleMask);
			m_pContext->OMSetDepthStencilState(m_pDepthStencilState, m_stencilRef);

			m_pContext->RSSetState(m_pRasterizerState);

			m_pContext->VSSetShader(m_pVS, m_pVSClassInstances, m_numVSClassInstances);
			m_pContext->VSSetConstantBuffers(0, 1, &m_pVSConstantBuffer);

			m_pContext->PSSetShader(m_pPS, m_pPSClassInstances, m_numPSClassInstances);
			m_pContext->PSSetShaderResources(0, 1, &m_pPSSRV);
			m_pContext->PSSetSamplers(0, 1, &m_pSamplerState);

			if (m_featureLevel >= D3D_FEATURE_LEVEL_10_0)
			{
				m_pContext->GSSetShader(m_pGS, m_pGSClassInstances, m_numGSClassInstances);
				m_pContext->GSSetConstantBuffers(0, 1, &m_pGSConstantBuffer);

				m_pContext->GSSetShaderResources(0, 1, &m_pGSSRV);

				if (m_featureLevel >= D3D_FEATURE_LEVEL_11_0)
				{
					m_pContext->HSSetShader(m_pHS, m_pHSClassInstances, m_numHSClassInstances);

					m_pContext->DSSetShader(m_pDS, m_pDSClassInstances, m_numDSClassInstances);
				}
			}

			m_pContext->IASetVertexBuffers(0, 1, &m_pVB, &m_vertexStride, &m_vertexOffset);

			m_pContext->IASetIndexBuffer(m_pIndexBuffer, m_indexFormat, m_indexOffset);
		}
	}

	// Release state
	void StateSaver::releaseSavedState()
	{
		m_primitiveTopology = D3D11_PRIMITIVE_TOPOLOGY_UNDEFINED;
		SafeRelease(m_pInputLayout);
		SafeRelease(m_pBlendState);
		for (int i = 0; i < 4; ++i)
			m_blendFactor[i] = 0.0f;
		m_sampleMask = 0xffffffff;
		SafeRelease(m_pDepthStencilState);
		m_stencilRef = 0;
		SafeRelease(m_pRasterizerState);
		SafeRelease(m_pPSSRV);
		SafeRelease(m_pSamplerState);
		SafeRelease(m_pVS);
		for (UINT i = 0; i < m_numVSClassInstances; ++i)
			SafeRelease(m_pVSClassInstances[i]);
		m_numVSClassInstances = 0;
		SafeRelease(m_pVSConstantBuffer);
		SafeRelease(m_pGS);
		for (UINT i = 0; i < m_numGSClassInstances; ++i)
			SafeRelease(m_pGSClassInstances[i]);
		m_numGSClassInstances = 0;
		SafeRelease(m_pGSConstantBuffer);
		SafeRelease(m_pGSSRV);
		SafeRelease(m_pPS);
		for (UINT i = 0; i < m_numPSClassInstances; ++i)
			SafeRelease(m_pPSClassInstances[i]);
		m_numPSClassInstances = 0;
		SafeRelease(m_pHS);
		for (UINT i = 0; i < m_numHSClassInstances; ++i)
			SafeRelease(m_pHSClassInstances[i]);
		m_numHSClassInstances = 0;
		SafeRelease(m_pDS);
		for (UINT i = 0; i < m_numDSClassInstances; ++i)
			SafeRelease(m_pDSClassInstances[i]);
		m_numDSClassInstances = 0;
		SafeRelease(m_pVB);
		m_vertexStride = 0;
		m_vertexOffset = 0;
		SafeRelease(m_pIndexBuffer);
		m_indexFormat = DXGI_FORMAT_UNKNOWN;
		m_indexOffset = 0;

		SafeRelease(m_pContext);
		m_featureLevel = D3D_FEATURE_LEVEL_11_0;

		m_savedState = false;
	}
}
