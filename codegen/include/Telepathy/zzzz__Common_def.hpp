#pragma once
// IWYU pragma private; include "Telepathy/Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
// Forward declare root types
namespace Telepathy {
class Common;
}
// Write type traits
MARK_REF_T(::Telepathy::Common*);
DEFINE_IL2CPP_CLASS(::Telepathy::Common*, "Telepathy", "Common");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Common
class CORDL_TYPE Common : public ::System::Object {
public:
// Declarations
/// @brief Field MaxMessageSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxMessageSize, put=__cordl_internal_set_MaxMessageSize)) int32_t  MaxMessageSize;

/// @brief Field NoDelay, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_NoDelay, put=__cordl_internal_set_NoDelay)) bool  NoDelay;

/// @brief Field ReceiveTimeout, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceiveTimeout, put=__cordl_internal_set_ReceiveTimeout)) int32_t  ReceiveTimeout;

/// @brief Field SendTimeout, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendTimeout, put=__cordl_internal_set_SendTimeout)) int32_t  SendTimeout;

static inline ::Telepathy::Common* New_ctor(int32_t  MaxMessageSize) ;

constexpr int32_t const& __cordl_internal_get_MaxMessageSize() const;

constexpr int32_t& __cordl_internal_get_MaxMessageSize() ;

constexpr bool const& __cordl_internal_get_NoDelay() const;

constexpr bool& __cordl_internal_get_NoDelay() ;

constexpr int32_t const& __cordl_internal_get_ReceiveTimeout() const;

constexpr int32_t& __cordl_internal_get_ReceiveTimeout() ;

constexpr int32_t const& __cordl_internal_get_SendTimeout() const;

constexpr int32_t& __cordl_internal_get_SendTimeout() ;

constexpr void __cordl_internal_set_MaxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_NoDelay(bool  value) ;

constexpr void __cordl_internal_set_ReceiveTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_SendTimeout(int32_t  value) ;

/// @brief Method .ctor, addr 0x181e584c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  MaxMessageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Common() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common(Common && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common(Common const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21316};

/// @brief Field NoDelay, offset: 0x10, size: 0x1, def value: None
 bool  ___NoDelay;

/// @brief Field MaxMessageSize, offset: 0x14, size: 0x4, def value: None
 int32_t  ___MaxMessageSize;

/// @brief Field SendTimeout, offset: 0x18, size: 0x4, def value: None
 int32_t  ___SendTimeout;

/// @brief Field ReceiveTimeout, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___ReceiveTimeout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Common, ___NoDelay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Common, ___MaxMessageSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Common, ___SendTimeout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Common, ___ReceiveTimeout) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Common) == 0x20, "Size mismatch!");

} // namespace end def Telepathy
