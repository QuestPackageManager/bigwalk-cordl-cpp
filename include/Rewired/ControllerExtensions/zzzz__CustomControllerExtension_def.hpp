#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/CustomControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
CORDL_MODULE_EXPORT(CustomControllerExtension)
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
struct UpdateLoopType;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class CustomControllerExtension;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::CustomControllerExtension*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::CustomControllerExtension*, "Rewired.ControllerExtensions", "CustomControllerExtension");
// Dependencies Rewired.Controller::Extension
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.CustomControllerExtension
class CORDL_TYPE CustomControllerExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
/// @brief Field OgMNoufPdLekiAGIIAuYOtEgBueZ, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_OgMNoufPdLekiAGIIAuYOtEgBueZ, put=__cordl_internal_set_OgMNoufPdLekiAGIIAuYOtEgBueZ)) bool  OgMNoufPdLekiAGIIAuYOtEgBueZ;

/// @brief Method Clone, addr 0x181163b40, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method GetSource, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::IControllerExtensionSource* GetSource() ;

static inline ::Rewired::ControllerExtensions::CustomControllerExtension* New_ctor(::Rewired::ControllerExtensions::CustomControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::CustomControllerExtension* New_ctor(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OnSourceUpdated, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnSourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method OnUpdateData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnUpdateData(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method ShallowCopy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* ShallowCopy() ;

/// @brief Method SourceUpdated, addr 0x1818ca670, size 0x20, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0x1818ca690, size 0x50, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr bool const& __cordl_internal_get_OgMNoufPdLekiAGIIAuYOtEgBueZ() const;

constexpr bool& __cordl_internal_get_OgMNoufPdLekiAGIIAuYOtEgBueZ() ;

constexpr void __cordl_internal_set_OgMNoufPdLekiAGIIAuYOtEgBueZ(bool  value) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::CustomControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818ca6e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerExtension(CustomControllerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerExtension(CustomControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2675};

/// @brief Field OgMNoufPdLekiAGIIAuYOtEgBueZ, offset: 0x24, size: 0x1, def value: None
 bool  ___OgMNoufPdLekiAGIIAuYOtEgBueZ;

/// @brief Size padding 0x30 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::CustomControllerExtension, ___OgMNoufPdLekiAGIIAuYOtEgBueZ) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::CustomControllerExtension) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
