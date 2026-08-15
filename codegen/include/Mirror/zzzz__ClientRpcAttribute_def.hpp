#pragma once
// IWYU pragma private; include "Mirror/ClientRpcAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientRpcAttribute)
// Forward declare root types
namespace Mirror {
class ClientRpcAttribute;
}
// Write type traits
MARK_REF_T(::Mirror::ClientRpcAttribute*);
DEFINE_IL2CPP_CLASS(::Mirror::ClientRpcAttribute*, "Mirror", "ClientRpcAttribute");
// Dependencies System.Attribute
namespace Mirror {
// Is value type: false
// CS Name: Mirror.ClientRpcAttribute
class CORDL_TYPE ClientRpcAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field channel, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) int32_t  channel;

/// @brief Field includeOwner, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeOwner, put=__cordl_internal_set_includeOwner)) bool  includeOwner;

static inline ::Mirror::ClientRpcAttribute* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_channel() const;

constexpr int32_t& __cordl_internal_get_channel() ;

constexpr bool const& __cordl_internal_get_includeOwner() const;

constexpr bool& __cordl_internal_get_includeOwner() ;

constexpr void __cordl_internal_set_channel(int32_t  value) ;

constexpr void __cordl_internal_set_includeOwner(bool  value) ;

/// @brief Method .ctor, addr 0x1812e5480, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientRpcAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientRpcAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientRpcAttribute(ClientRpcAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientRpcAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientRpcAttribute(ClientRpcAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18262};

/// @brief Field channel, offset: 0x10, size: 0x4, def value: None
 int32_t  ___channel;

/// @brief Field includeOwner, offset: 0x14, size: 0x1, def value: None
 bool  ___includeOwner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::ClientRpcAttribute, ___channel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::ClientRpcAttribute, ___includeOwner) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Mirror::ClientRpcAttribute) == 0x18, "Size mismatch!");

} // namespace end def Mirror
