#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleUnloadOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleUnloadOperation)
// Forward declare root types
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetBundleUnloadOperation*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundleUnloadOperation*, "UnityEngine", "AssetBundleUnloadOperation");
// Dependencies UnityEngine.AsyncOperation
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleUnloadOperation
class CORDL_TYPE AssetBundleUnloadOperation : public ::UnityEngine::AsyncOperation {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleUnloadOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleUnloadOperation(AssetBundleUnloadOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleUnloadOperation(AssetBundleUnloadOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21431};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundleUnloadOperation) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
