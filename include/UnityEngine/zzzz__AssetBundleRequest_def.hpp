#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AssetBundleRequest)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AssetBundleRequest_BindingsMarshaller;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundleRequest_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetBundleRequest*);
MARK_REF_T(::UnityEngine::AssetBundleRequest_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundleRequest*, "UnityEngine", "AssetBundleRequest");
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundleRequest_BindingsMarshaller*, "UnityEngine", "AssetBundleRequest/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleRequest/BindingsMarshaller
class CORDL_TYPE AssetBundleRequest_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::AssetBundleRequest*  request) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequest_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequest_BindingsMarshaller(AssetBundleRequest_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequest_BindingsMarshaller(AssetBundleRequest_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21429};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundleRequest_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.ResourceRequest
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleRequest
class CORDL_TYPE AssetBundleRequest : public ::UnityEngine::ResourceRequest {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::AssetBundleRequest_BindingsMarshaller;

 __declspec(property(get=get_allAssets)) ::ArrayW<::UnityW<::UnityEngine::Object>>  allAssets;

 __declspec(property(get=get_asset)) ::UnityW<::UnityEngine::Object>  asset;

/// @brief Method get_allAssets, addr 0x182238330, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Object>> get_allAssets() ;

/// @brief Method get_allAssets_Injected, addr 0x182238320, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> get_allAssets_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_asset, addr 0x181723810, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_asset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequest(AssetBundleRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequest(AssetBundleRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundleRequest) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine
