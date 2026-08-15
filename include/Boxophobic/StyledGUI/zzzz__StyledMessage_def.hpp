#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StyledMessage)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledMessage;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledMessage*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledMessage*, "Boxophobic.StyledGUI", "StyledMessage");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledMessage
class CORDL_TYPE StyledMessage : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field down, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_down, put=__cordl_internal_set_down)) float_t  down;

/// @brief Field message, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field top, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) float_t  top;

/// @brief Field type, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

static inline ::Boxophobic::StyledGUI::StyledMessage* New_ctor(::StringW  type, ::StringW  message) ;

static inline ::Boxophobic::StyledGUI::StyledMessage* New_ctor(::StringW  type, ::StringW  message, float_t  top, float_t  down) ;

constexpr float_t const& __cordl_internal_get_down() const;

constexpr float_t& __cordl_internal_get_down() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr float_t const& __cordl_internal_get_top() const;

constexpr float_t& __cordl_internal_get_top() ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_down(float_t  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_top(float_t  value) ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804bd560, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  type, ::StringW  message) ;

/// @brief Method .ctor, addr 0x1804bd5c0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  type, ::StringW  message, float_t  top, float_t  down) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledMessage(StyledMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledMessage(StyledMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21182};

/// @brief Field type, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___type;

/// @brief Field message, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___message;

/// @brief Field top, offset: 0x28, size: 0x4, def value: None
 float_t  ___top;

/// @brief Field down, offset: 0x2c, size: 0x4, def value: None
 float_t  ___down;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledMessage, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledMessage, ___message) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledMessage, ___top) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledMessage, ___down) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledMessage) == 0x30, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
