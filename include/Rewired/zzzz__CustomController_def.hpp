#pragma once
// IWYU pragma private; include "Rewired/CustomController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerWithAxes_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomController)
namespace GlobalNamespace {
class wYHtGvFmfcHjitltWJMQfHrcikUR;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class CustomController;
}
// Write type traits
MARK_REF_T(::Rewired::CustomController*);
DEFINE_IL2CPP_CLASS(::Rewired::CustomController*, "Rewired", "CustomController");
// Dependencies Rewired.ControllerWithAxes, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CustomController
class CORDL_TYPE CustomController : public ::Rewired::ControllerWithAxes {
public:
// Declarations
/// @brief Field cSdWVSTJUDEOtcOmSHVjUXqVnJGRA, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA, put=__cordl_internal_set_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA)) ::System::Func_2<int32_t,float_t>*  cSdWVSTJUDEOtcOmSHVjUXqVnJGRA;

 __declspec(property(get=get_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

/// @brief Field lCNzrkrismRRGFhiYFeoOMCeWghi, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_lCNzrkrismRRGFhiYFeoOMCeWghi, put=__cordl_internal_set_lCNzrkrismRRGFhiYFeoOMCeWghi)) int32_t  lCNzrkrismRRGFhiYFeoOMCeWghi;

/// @brief Field nukstQsJIpLFcVWCUFMzntOmoqRL, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_nukstQsJIpLFcVWCUFMzntOmoqRL, put=__cordl_internal_set_nukstQsJIpLFcVWCUFMzntOmoqRL)) ::System::Func_2<int32_t,bool>*  nukstQsJIpLFcVWCUFMzntOmoqRL;

 __declspec(property(get=get_sourceControllerId)) int32_t  sourceControllerId;

/// @brief Field txyYPhBrqLwJBCNoRAVcNIeSFhqGA, offset 0x1a4, size 0x10 
 __declspec(property(get=__cordl_internal_get_txyYPhBrqLwJBCNoRAVcNIeSFhqGA, put=__cordl_internal_set_txyYPhBrqLwJBCNoRAVcNIeSFhqGA)) ::System::Guid  txyYPhBrqLwJBCNoRAVcNIeSFhqGA;

/// @brief Field uAYqubfidolxwAFlUcygiKARHaiK, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_uAYqubfidolxwAFlUcygiKARHaiK, put=__cordl_internal_set_uAYqubfidolxwAFlUcygiKARHaiK)) bool  uAYqubfidolxwAFlUcygiKARHaiK;

/// @brief Method ClearAxisValue, addr 0x1818570e0, size 0x120, virtual false, abstract: false, final false
inline void ClearAxisValue(::StringW  elementName) ;

/// @brief Method ClearAxisValue, addr 0x181856fb0, size 0x130, virtual false, abstract: false, final false
inline void ClearAxisValue(int32_t  index) ;

/// @brief Method ClearAxisValueById, addr 0x181856ec0, size 0xf0, virtual false, abstract: false, final false
inline void ClearAxisValueById(int32_t  elementId) ;

/// @brief Method ClearButtonValue, addr 0x1818572f0, size 0x120, virtual false, abstract: false, final false
inline void ClearButtonValue(::StringW  elementName) ;

/// @brief Method ClearButtonValue, addr 0x181857410, size 0x120, virtual false, abstract: false, final false
inline void ClearButtonValue(int32_t  index) ;

/// @brief Method ClearButtonValueById, addr 0x181857200, size 0xf0, virtual false, abstract: false, final false
inline void ClearButtonValueById(int32_t  elementId) ;

static inline ::Rewired::CustomController* New_ctor(::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::CustomController* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::StringW  _cordl_fixed_empty_name_whitespace_param_5, ::StringW  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method SetAxisUpdateCallback, addr 0x181857530, size 0x90, virtual false, abstract: false, final false
inline void SetAxisUpdateCallback(::System::Func_2<int32_t,float_t>*  callback) ;

/// @brief Method SetAxisValue, addr 0x1818576e0, size 0x150, virtual false, abstract: false, final false
inline void SetAxisValue(::StringW  elementName, float_t  value) ;

/// @brief Method SetAxisValue, addr 0x181857830, size 0x110, virtual false, abstract: false, final false
inline void SetAxisValue(int32_t  index, float_t  value) ;

/// @brief Method SetAxisValueById, addr 0x1818575c0, size 0x120, virtual false, abstract: false, final false
inline void SetAxisValueById(int32_t  elementId, float_t  value) ;

/// @brief Method SetButtonUpdateCallback, addr 0x181857940, size 0x90, virtual false, abstract: false, final false
inline void SetButtonUpdateCallback(::System::Func_2<int32_t,bool>*  callback) ;

/// @brief Method SetButtonValue, addr 0x181857c00, size 0x150, virtual false, abstract: false, final false
inline void SetButtonValue(::StringW  elementName, bool  value) ;

/// @brief Method SetButtonValue, addr 0x181857af0, size 0x110, virtual false, abstract: false, final false
inline void SetButtonValue(int32_t  index, bool  value) ;

/// @brief Method SetButtonValueById, addr 0x1818579d0, size 0x120, virtual false, abstract: false, final false
inline void SetButtonValueById(int32_t  elementId, bool  value) ;

constexpr ::System::Func_2<int32_t,float_t>* const& __cordl_internal_get_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA() const;

constexpr ::System::Func_2<int32_t,float_t>*& __cordl_internal_get_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA() ;

constexpr int32_t const& __cordl_internal_get_lCNzrkrismRRGFhiYFeoOMCeWghi() const;

constexpr int32_t& __cordl_internal_get_lCNzrkrismRRGFhiYFeoOMCeWghi() ;

constexpr ::System::Func_2<int32_t,bool>* const& __cordl_internal_get_nukstQsJIpLFcVWCUFMzntOmoqRL() const;

constexpr ::System::Func_2<int32_t,bool>*& __cordl_internal_get_nukstQsJIpLFcVWCUFMzntOmoqRL() ;

constexpr ::System::Guid const& __cordl_internal_get_txyYPhBrqLwJBCNoRAVcNIeSFhqGA() const;

constexpr ::System::Guid& __cordl_internal_get_txyYPhBrqLwJBCNoRAVcNIeSFhqGA() ;

constexpr bool const& __cordl_internal_get_uAYqubfidolxwAFlUcygiKARHaiK() const;

constexpr bool& __cordl_internal_get_uAYqubfidolxwAFlUcygiKARHaiK() ;

constexpr void __cordl_internal_set_cSdWVSTJUDEOtcOmSHVjUXqVnJGRA(::System::Func_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_lCNzrkrismRRGFhiYFeoOMCeWghi(int32_t  value) ;

constexpr void __cordl_internal_set_nukstQsJIpLFcVWCUFMzntOmoqRL(::System::Func_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_txyYPhBrqLwJBCNoRAVcNIeSFhqGA(::System::Guid  value) ;

constexpr void __cordl_internal_set_uAYqubfidolxwAFlUcygiKARHaiK(bool  value) ;

/// @brief Method .ctor, addr 0x181857d50, size 0x210, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::wYHtGvFmfcHjitltWJMQfHrcikUR*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181857f60, size 0x140, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::StringW  _cordl_fixed_empty_name_whitespace_param_5, ::StringW  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method dlXklalsZBFgXMkzqYrOxvchvvRI, addr 0x1818580a0, size 0x130, virtual false, abstract: false, final false
inline void dlXklalsZBFgXMkzqYrOxvchvvRI() ;

/// @brief Method get_deviceInstanceGuid, addr 0x1818581d0, size 0x90, virtual true, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_sourceControllerId, addr 0x181858260, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sourceControllerId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController(CustomController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController(CustomController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1838};

/// @brief Field lCNzrkrismRRGFhiYFeoOMCeWghi, offset: 0x188, size: 0x4, def value: None
 int32_t  ___lCNzrkrismRRGFhiYFeoOMCeWghi;

/// @brief Field cSdWVSTJUDEOtcOmSHVjUXqVnJGRA, offset: 0x190, size: 0x8, def value: None
 ::System::Func_2<int32_t,float_t>*  ___cSdWVSTJUDEOtcOmSHVjUXqVnJGRA;

/// @brief Field nukstQsJIpLFcVWCUFMzntOmoqRL, offset: 0x198, size: 0x8, def value: None
 ::System::Func_2<int32_t,bool>*  ___nukstQsJIpLFcVWCUFMzntOmoqRL;

/// @brief Field uAYqubfidolxwAFlUcygiKARHaiK, offset: 0x1a0, size: 0x1, def value: None
 bool  ___uAYqubfidolxwAFlUcygiKARHaiK;

/// @brief Field txyYPhBrqLwJBCNoRAVcNIeSFhqGA, offset: 0x1a4, size: 0x10, def value: None
 ::System::Guid  ___txyYPhBrqLwJBCNoRAVcNIeSFhqGA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CustomController, ___lCNzrkrismRRGFhiYFeoOMCeWghi) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Rewired::CustomController, ___cSdWVSTJUDEOtcOmSHVjUXqVnJGRA) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Rewired::CustomController, ___nukstQsJIpLFcVWCUFMzntOmoqRL) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Rewired::CustomController, ___uAYqubfidolxwAFlUcygiKARHaiK) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Rewired::CustomController, ___txyYPhBrqLwJBCNoRAVcNIeSFhqGA) == 0x1a4, "Offset mismatch!");

static_assert(sizeof(::Rewired::CustomController) == 0x1b8, "Size mismatch!");

} // namespace end def Rewired
