#pragma once

#include "type.hpp"

NAMESPACE_SOUP
{
	enum TlsCipherSuite : TlsCipherSuite_t
	{
		TLS_RSA_WITH_AES_128_CBC_SHA = 0x002F,
		TLS_RSA_WITH_AES_256_CBC_SHA = 0x0035,
		TLS_RSA_WITH_AES_128_CBC_SHA256 = 0x003C,
		TLS_RSA_WITH_AES_256_CBC_SHA256 = 0x003D,

		TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = 0xC013,
		TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = 0xC014,
		TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = 0xC027,

		TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = 0xC009,
		TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = 0xC00A,
		TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = 0xC023,

		TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 0xC02F,
		TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = 0xC030,

		TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 0xC02B,
		TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = 0xC02C,

		TLS_GREASE_0 = 0x0A0A,
		TLS_GREASE_1 = 0x1A1A,
		TLS_GREASE_2 = 0x2A2A,
		TLS_GREASE_3 = 0x3A3A,
		TLS_GREASE_4 = 0x4A4A,
		TLS_GREASE_5 = 0x5A5A,
		TLS_GREASE_6 = 0x6A6A,
		TLS_GREASE_7 = 0x7A7A,
		TLS_GREASE_8 = 0x8A8A,
		TLS_GREASE_9 = 0x9A9A,
		TLS_GREASE_10 = 0xAAAA,
		TLS_GREASE_11 = 0xBABA,
		TLS_GREASE_12 = 0xCACA,
		TLS_GREASE_13 = 0xDADA,
		TLS_GREASE_14 = 0xEAEA,
		TLS_GREASE_15 = 0xFAFA,
	};

	[[nodiscard]] inline bool tls_isGreaseyCiphersuite(TlsCipherSuite_t ciphersuite)
	{
		switch (ciphersuite)
		{
		case TLS_GREASE_0:
		case TLS_GREASE_1:
		case TLS_GREASE_2:
		case TLS_GREASE_3:
		case TLS_GREASE_4:
		case TLS_GREASE_5:
		case TLS_GREASE_6:
		case TLS_GREASE_7:
		case TLS_GREASE_8:
		case TLS_GREASE_9:
		case TLS_GREASE_10:
		case TLS_GREASE_11:
		case TLS_GREASE_12:
		case TLS_GREASE_13:
		case TLS_GREASE_14:
		case TLS_GREASE_15:
			return true;
		}
		return false;
	}
}
