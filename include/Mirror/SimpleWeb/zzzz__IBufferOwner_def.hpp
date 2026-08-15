#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/IBufferOwner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBufferOwner)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class IBufferOwner;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::IBufferOwner*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::IBufferOwner*, "Mirror.SimpleWeb", "IBufferOwner");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.IBufferOwner
class CORDL_TYPE IBufferOwner {
public:
// Declarations
/// @brief Method Return, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Return(::Mirror::SimpleWeb::ArrayBuffer*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IBufferOwner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBufferOwner(IBufferOwner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20518};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror::SimpleWeb
