#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Mono/Btls/IMonoBtlsBioMono.hpp"
#include "Mono/Btls/MonoBtlsBio.hpp"
#include "Mono/Btls/MonoBtlsBioMemory.hpp"
#include "Mono/Btls/MonoBtlsBioMono.hpp"
#include "Mono/Btls/MonoBtlsContext.hpp"
#include "Mono/Btls/MonoBtlsError.hpp"
#include "Mono/Btls/MonoBtlsException.hpp"
#include "Mono/Btls/MonoBtlsKey.hpp"
#include "Mono/Btls/MonoBtlsObject.hpp"
#include "Mono/Btls/MonoBtlsPkcs12.hpp"
#include "Mono/Btls/MonoBtlsProvider.hpp"
#include "Mono/Btls/MonoBtlsSelectCallback.hpp"
#include "Mono/Btls/MonoBtlsServerNameCallback.hpp"
#include "Mono/Btls/MonoBtlsSsl.hpp"
#include "Mono/Btls/MonoBtlsSslCtx.hpp"
#include "Mono/Btls/MonoBtlsSslError.hpp"
#include "Mono/Btls/MonoBtlsSslRenegotiateMode.hpp"
#include "Mono/Btls/MonoBtlsStream.hpp"
#include "Mono/Btls/MonoBtlsUtils.hpp"
#include "Mono/Btls/MonoBtlsVerifyCallback.hpp"
#include "Mono/Btls/MonoBtlsX509.hpp"
#include "Mono/Btls/MonoBtlsX509Chain.hpp"
#include "Mono/Btls/MonoBtlsX509Error.hpp"
#include "Mono/Btls/MonoBtlsX509FileType.hpp"
#include "Mono/Btls/MonoBtlsX509Format.hpp"
#include "Mono/Btls/MonoBtlsX509Lookup.hpp"
#include "Mono/Btls/MonoBtlsX509LookupMono.hpp"
#include "Mono/Btls/MonoBtlsX509LookupMonoCollection.hpp"
#include "Mono/Btls/MonoBtlsX509LookupType.hpp"
#include "Mono/Btls/MonoBtlsX509Name.hpp"
#include "Mono/Btls/MonoBtlsX509NameEntryType.hpp"
#include "Mono/Btls/MonoBtlsX509Store.hpp"
#include "Mono/Btls/MonoBtlsX509StoreCtx.hpp"
#include "Mono/Btls/MonoBtlsX509StoreManager.hpp"
#include "Mono/Btls/MonoBtlsX509StoreType.hpp"
#include "Mono/Btls/MonoBtlsX509TrustKind.hpp"
#include "Mono/Btls/MonoBtlsX509VerifyParam.hpp"
#include "Mono/Btls/X509CertificateImplBtls.hpp"
#include "Mono/Btls/X509ChainImplBtls.hpp"
#include "Mono/Btls/X509PalImplBtls.hpp"
#ifdef __cpp_modules
                    export module Btls;
                    #endif
                
