#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__CustomController_def.hpp"
CORDL_MODULE_EXPORT(TouchController)
// Forward declare root types
namespace Rewired::ComponentControls {
class TouchController;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::TouchController*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::TouchController*, "Rewired.ComponentControls", "TouchController");
// Dependencies Rewired.ComponentControls.CustomController
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.TouchController
class CORDL_TYPE TouchController : public ::Rewired::ComponentControls::CustomController {
public:
// Declarations
/// @brief Field _disableMouseInputWhenEnabled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableMouseInputWhenEnabled, put=__cordl_internal_set__disableMouseInputWhenEnabled)) bool  _disableMouseInputWhenEnabled;

/// @brief Field _useCustomController, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__useCustomController, put=__cordl_internal_set__useCustomController)) bool  _useCustomController;

/// @brief Field daZnKkeMUCSeZhNqVNBIAAiajuGy, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_daZnKkeMUCSeZhNqVNBIAAiajuGy, put=__cordl_internal_set_daZnKkeMUCSeZhNqVNBIAAiajuGy)) bool  daZnKkeMUCSeZhNqVNBIAAiajuGy;

 __declspec(property(get=get_disableMouseInputWhenEnabled, put=set_disableMouseInputWhenEnabled)) bool  disableMouseInputWhenEnabled;

 __declspec(property(get=get_useCustomController, put=set_useCustomController)) bool  useCustomController;

/// @brief Method GetUseCustomController, addr 0x1815f5410, size 0x10, virtual true, abstract: false, final false
inline bool GetUseCustomController() ;

/// @brief Method KQOBlojkRLgSfcwhLFvonNfcQHKLA, addr 0x1818e5690, size 0x90, virtual false, abstract: false, final false
inline bool KQOBlojkRLgSfcwhLFvonNfcQHKLA() ;

static inline ::Rewired::ComponentControls::TouchController* New_ctor() ;

/// @brief Method OnDisable, addr 0x1818e5720, size 0xe0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetUseCustomController, addr 0x1816ddb50, size 0x10, virtual true, abstract: false, final false
inline void SetUseCustomController(bool  value) ;

constexpr bool const& __cordl_internal_get__disableMouseInputWhenEnabled() const;

constexpr bool& __cordl_internal_get__disableMouseInputWhenEnabled() ;

constexpr bool const& __cordl_internal_get__useCustomController() const;

constexpr bool& __cordl_internal_get__useCustomController() ;

constexpr bool const& __cordl_internal_get_daZnKkeMUCSeZhNqVNBIAAiajuGy() const;

constexpr bool& __cordl_internal_get_daZnKkeMUCSeZhNqVNBIAAiajuGy() ;

constexpr void __cordl_internal_set__disableMouseInputWhenEnabled(bool  value) ;

constexpr void __cordl_internal_set__useCustomController(bool  value) ;

constexpr void __cordl_internal_set_daZnKkeMUCSeZhNqVNBIAAiajuGy(bool  value) ;

/// @brief Method .ctor, addr 0x1818e5800, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method ezVLUULRjiPhyizEZQaMxZmSrOI, addr 0x1818e58f0, size 0xa0, virtual false, abstract: false, final false
inline void ezVLUULRjiPhyizEZQaMxZmSrOI(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gbwpxpHhDFNTLymwOtLaVHGjwhXd, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void gbwpxpHhDFNTLymwOtLaVHGjwhXd() ;

/// @brief Method get_disableMouseInputWhenEnabled, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_disableMouseInputWhenEnabled() ;

/// @brief Method get_useCustomController, addr 0x1815f5410, size 0x10, virtual false, abstract: false, final false
inline bool get_useCustomController() ;

/// @brief Method sZJIbDAqfSASsJEhVDkPrZVbkCeTA, addr 0x1818e5990, size 0x180, virtual true, abstract: false, final false
inline bool sZJIbDAqfSASsJEhVDkPrZVbkCeTA() ;

/// @brief Method set_disableMouseInputWhenEnabled, addr 0x1818e5b10, size 0x10, virtual false, abstract: false, final false
inline void set_disableMouseInputWhenEnabled(bool  value) ;

/// @brief Method set_useCustomController, addr 0x1818e5b20, size 0x90, virtual false, abstract: false, final false
inline void set_useCustomController(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchController(TouchController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchController(TouchController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2756};

/// @brief Field _disableMouseInputWhenEnabled, offset: 0x60, size: 0x1, def value: None
 bool  ____disableMouseInputWhenEnabled;

/// @brief Field _useCustomController, offset: 0x61, size: 0x1, def value: None
 bool  ____useCustomController;

/// @brief Field daZnKkeMUCSeZhNqVNBIAAiajuGy, offset: 0x62, size: 0x1, def value: None
 bool  ___daZnKkeMUCSeZhNqVNBIAAiajuGy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::TouchController, ____disableMouseInputWhenEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchController, ____useCustomController) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::TouchController, ___daZnKkeMUCSeZhNqVNBIAAiajuGy) == 0x62, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::TouchController) == 0x68, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
