// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

//
// This file was generated by exporting HLSL from Visual Studio's default "Unlit" material, and then modified to handle both texture scenarios
// <Visual Studio install folder>\Common7\IDE\Extensions\Microsoft\VsGraphics\Assets\Effects\Unlit.dgsl 
//

Texture2D Texture1 : register(t0);

SamplerState TexSampler : register(s0);

cbuffer MaterialVars : register (b0)
{
    float4 MaterialAmbient;
    float4 MaterialDiffuse;
    float4 MaterialSpecular;
    float4 MaterialEmissive;
    float MaterialSpecularPower;
};

cbuffer LightVars : register (b1)
{
    float4 AmbientLight;
    float4 LightColor[4];
    float4 LightAttenuation[4];
    float3 LightDirection[4];
    float LightSpecularIntensity[4];
    uint IsPointLight[4];
    uint ActiveLights;
}

cbuffer ObjectVars : register(b2)
{
    float4x4 LocalToWorld4x4;
    float4x4 LocalToProjected4x4;
    float4x4 WorldToLocal4x4;
    float4x4 WorldToView4x4;
    float4x4 UVTransform4x4;
    float3 EyePosition;
};

cbuffer MiscVars : register(b3)
{
    float ViewportWidth;
    float ViewportHeight;
    float Time;
};

struct V2P
{
    float4 pos : SV_POSITION;
    float4 diffuse : COLOR;
    float2 uv : TEXCOORD0;
    float3 worldNorm : TEXCOORD1;
    float3 worldPos : TEXCOORD2;
    float3 toEye : TEXCOORD3;
    float4 tangent : TEXCOORD4;
    float3 normal : TEXCOORD5;
};

struct P2F
{
    float4 fragment : SV_Target;
};

//
// combines a float3 RGB value with an alpha value into a float4
//
float4 CombineRGBWithAlpha(float3 rgb, float a)
{
    return float4(rgb.r, rgb.g, rgb.b, a);
}

P2F main(V2P pixel)
{
    P2F result;

    result.fragment = pixel.diffuse;

    return result;
}

P2F mainTk(V2P pixel)
{
    P2F result;

    result.fragment = pixel.diffuse;
    if (result.fragment.a == 0.0f) discard;

    return result;
}

P2F mainTx(V2P pixel)
{
    P2F result;

    // we need to normalize incoming vectors
    float3 surfaceNormal = normalize(pixel.normal);
    float3 surfaceTangent = normalize(pixel.tangent.xyz);
    float3 worldNormal = normalize(pixel.worldNorm);
    float3 toEyeVector = normalize(pixel.toEye);

    // construct tangent matrix
    float3x3 localToTangent = transpose(float3x3(surfaceTangent, cross(surfaceNormal, surfaceTangent) * pixel.tangent.w, surfaceNormal));
    float3x3 worldToTangent = mul((float3x3)WorldToLocal4x4, localToTangent);

    // transform some vectors into tangent space
    float3 tangentLightDir = normalize(mul(LightDirection[0], worldToTangent));
    float3 tangentToEyeVec = normalize(mul(toEyeVector, worldToTangent));

    // BEGIN GENERATED CODE
    float3 local3 = pixel.diffuse.rgb * Texture1.Sample(TexSampler, pixel.uv).rgb;
    float local4 = pixel.diffuse.a * Texture1.Sample(TexSampler, pixel.uv).a;
    result.fragment = CombineRGBWithAlpha(local3, local4);
    // END GENERATED CODE

    return result;
}

P2F mainTxTk(V2P pixel)
{
    P2F result;

    // we need to normalize incoming vectors
    float3 surfaceNormal = normalize(pixel.normal);
    float3 surfaceTangent = normalize(pixel.tangent.xyz);
    float3 worldNormal = normalize(pixel.worldNorm);
    float3 toEyeVector = normalize(pixel.toEye);

    // construct tangent matrix
    float3x3 localToTangent = transpose(float3x3(surfaceTangent, cross(surfaceNormal, surfaceTangent) * pixel.tangent.w, surfaceNormal));
    float3x3 worldToTangent = mul((float3x3)WorldToLocal4x4, localToTangent);

    // transform some vectors into tangent space
    float3 tangentLightDir = normalize(mul(LightDirection[0], worldToTangent));
    float3 tangentToEyeVec = normalize(mul(toEyeVector, worldToTangent));

    // BEGIN GENERATED CODE
    float3 local3 = pixel.diffuse.rgb * Texture1.Sample(TexSampler, pixel.uv).rgb;
    float local4 = pixel.diffuse.a * Texture1.Sample(TexSampler, pixel.uv).a;
    result.fragment = CombineRGBWithAlpha(local3, local4);
    // END GENERATED CODE

    if (result.fragment.a == 0.0f) discard;

    return result;
}

