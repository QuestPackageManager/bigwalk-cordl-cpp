#pragma once
// IWYU pragma private; include "Rewired/ControllerStatusChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerStatusChangedEventArgs)
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
// Forward declare root types
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerStatusChangedEventArgs*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerStatusChangedEventArgs*, "Rewired", "ControllerStatusChangedEventArgs");
// Dependencies Rewired.ControllerType, System.EventArgs
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerStatusChangedEventArgs
class CORDL_TYPE ControllerStatusChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field QRaGqQBHitazSACrYlVCXJhhYedD, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_QRaGqQBHitazSACrYlVCXJhhYedD, put=__cordl_internal_set_QRaGqQBHitazSACrYlVCXJhhYedD)) ::Rewired::ControllerType  QRaGqQBHitazSACrYlVCXJhhYedD;

/// @brief Field XSVAYDTKAsXyViZDpUJXjocBhOtW, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_XSVAYDTKAsXyViZDpUJXjocBhOtW, put=__cordl_internal_set_XSVAYDTKAsXyViZDpUJXjocBhOtW)) ::StringW  XSVAYDTKAsXyViZDpUJXjocBhOtW;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerId)) int32_t  controllerId;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Field vzHfCMJnrNemZNfGjPrZDvciaGHb, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_vzHfCMJnrNemZNfGjPrZDvciaGHb, put=__cordl_internal_set_vzHfCMJnrNemZNfGjPrZDvciaGHb)) int32_t  vzHfCMJnrNemZNfGjPrZDvciaGHb;

static inline ::Rewired::ControllerStatusChangedEventArgs* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get_QRaGqQBHitazSACrYlVCXJhhYedD() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get_QRaGqQBHitazSACrYlVCXJhhYedD() ;

constexpr ::StringW const& __cordl_internal_get_XSVAYDTKAsXyViZDpUJXjocBhOtW() const;

constexpr ::StringW& __cordl_internal_get_XSVAYDTKAsXyViZDpUJXjocBhOtW() ;

constexpr int32_t const& __cordl_internal_get_vzHfCMJnrNemZNfGjPrZDvciaGHb() const;

constexpr int32_t& __cordl_internal_get_vzHfCMJnrNemZNfGjPrZDvciaGHb() ;

constexpr void __cordl_internal_set_QRaGqQBHitazSACrYlVCXJhhYedD(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set_XSVAYDTKAsXyViZDpUJXjocBhOtW(::StringW  value) ;

constexpr void __cordl_internal_set_vzHfCMJnrNemZNfGjPrZDvciaGHb(int32_t  value) ;

/// @brief Method .ctor, addr 0x181699600, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_controller, addr 0x18183dd70, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerId, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerType, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerStatusChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerStatusChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerStatusChangedEventArgs(ControllerStatusChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerStatusChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerStatusChangedEventArgs(ControllerStatusChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1749};

/// @brief Field XSVAYDTKAsXyViZDpUJXjocBhOtW, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___XSVAYDTKAsXyViZDpUJXjocBhOtW;

/// @brief Field vzHfCMJnrNemZNfGjPrZDvciaGHb, offset: 0x18, size: 0x4, def value: None
 int32_t  ___vzHfCMJnrNemZNfGjPrZDvciaGHb;

/// @brief Field QRaGqQBHitazSACrYlVCXJhhYedD, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::ControllerType  ___QRaGqQBHitazSACrYlVCXJhhYedD;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerStatusChangedEventArgs, ___XSVAYDTKAsXyViZDpUJXjocBhOtW) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerStatusChangedEventArgs, ___vzHfCMJnrNemZNfGjPrZDvciaGHb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerStatusChangedEventArgs, ___QRaGqQBHitazSACrYlVCXJhhYedD) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerStatusChangedEventArgs) == 0x20, "Size mismatch!");

} // namespace end def Rewired
