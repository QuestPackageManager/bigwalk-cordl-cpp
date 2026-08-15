#pragma once
// IWYU pragma private; include "Mirror/TargetRpcAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TargetRpcAttribute)
// Forward declare root types
namespace Mirror {
class TargetRpcAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::TargetRpcAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::TargetRpcAttribute*, "Mirror", "TargetRpcAttribute");
// Dependencies System.Attribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.TargetRpcAttribute
class CORDL_TYPE TargetRpcAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field channel, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) int32_t  channel;

static inline ::Mirror::TargetRpcAttribute* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_channel() const;

constexpr int32_t& __cordl_internal_get_channel() ;

constexpr void __cordl_internal_set_channel(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetRpcAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetRpcAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetRpcAttribute(TargetRpcAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetRpcAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetRpcAttribute(TargetRpcAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18263};

/// @brief Field channel, offset: 0x10, size: 0x4, def value: None
 int32_t  ___channel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TargetRpcAttribute, ___channel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::TargetRpcAttribute) == 0x18, "Size mismatch!");

} // namespace end def Mirror
