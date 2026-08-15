#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AsyncInstantiateOperation_1)
// Forward declare root types
namespace UnityEngine {
template<typename T>
class AsyncInstantiateOperation_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::AsyncInstantiateOperation_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::AsyncInstantiateOperation_1, "UnityEngine", "AsyncInstantiateOperation`1");
// Dependencies UnityEngine.AsyncInstantiateOperation
namespace UnityEngine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.AsyncInstantiateOperation`1<T>
class CORDL_TYPE AsyncInstantiateOperation_1 : public ::UnityEngine::AsyncInstantiateOperation {
public:
// Declarations
 __declspec(property(get=get_Result)) ::ArrayW<T>  Result;

/// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> get_Result() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncInstantiateOperation_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperation_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncInstantiateOperation_1(AsyncInstantiateOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperation_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncInstantiateOperation_1(AsyncInstantiateOperation_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
