#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomInputSource)
namespace Rewired::Interfaces {
class IUnifiedKeyboardSource;
}
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Axis;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Button;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Controller;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Element;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Joystick;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
struct InputSource;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomInputSource;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Axis;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Button;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Controller;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Element;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Joystick;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomInputSource*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomInputSource_Axis*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomInputSource_Button*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomInputSource_Controller*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomInputSource_Element*);
MARK_REF_T(::Rewired::Platforms::Custom::CustomInputSource_Joystick*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomInputSource*, "Rewired.Platforms.Custom", "CustomInputSource");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomInputSource_Axis*, "Rewired.Platforms.Custom", "CustomInputSource/Axis");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomInputSource_Button*, "Rewired.Platforms.Custom", "CustomInputSource/Button");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomInputSource_Controller*, "Rewired.Platforms.Custom", "CustomInputSource/Controller");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomInputSource_Element*, "Rewired.Platforms.Custom", "CustomInputSource/Element");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomInputSource_Joystick*, "Rewired.Platforms.Custom", "CustomInputSource/Joystick");
// Dependencies System.Guid, System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomInputSource/Controller
class CORDL_TYPE CustomInputSource_Controller : public ::System::Object {
public:
// Declarations
/// @brief Field LEmVVQDWbsbTTeqXCgyAtFcFvEqn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LEmVVQDWbsbTTeqXCgyAtFcFvEqn, put=__cordl_internal_set_LEmVVQDWbsbTTeqXCgyAtFcFvEqn)) ::System::Action_1<bool>*  LEmVVQDWbsbTTeqXCgyAtFcFvEqn;

/// @brief Field _customIdentifier, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__customIdentifier, put=__cordl_internal_set__customIdentifier)) ::System::Object*  _customIdentifier;

/// @brief Field _customName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__customName, put=__cordl_internal_set__customName)) ::StringW  _customName;

/// @brief Field _deviceName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__deviceName, put=__cordl_internal_set__deviceName)) ::StringW  _deviceName;

/// @brief Field _isConnected, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isConnected, put=__cordl_internal_set__isConnected)) bool  _isConnected;

/// @brief Field _persistentGuid, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__persistentGuid, put=__cordl_internal_set__persistentGuid)) ::System::Guid  _persistentGuid;

 __declspec(property(get=get_customIdentifier, put=set_customIdentifier)) ::System::Object*  customIdentifier;

 __declspec(property(get=get_customName)) ::StringW  customName;

 __declspec(property(get=get_deviceInstanceGuid, put=set_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

 __declspec(property(get=get_deviceName)) ::StringW  deviceName;

 __declspec(property(get=get_isConnected, put=set_isConnected)) bool  isConnected;

/// @brief Method Connect, addr 0x18187c870, size 0x20, virtual false, abstract: false, final false
inline void Connect() ;

/// @brief Method Disconnect, addr 0x18187c890, size 0x20, virtual false, abstract: false, final false
inline void Disconnect() ;

static inline ::Rewired::Platforms::Custom::CustomInputSource_Controller* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_LEmVVQDWbsbTTeqXCgyAtFcFvEqn() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_LEmVVQDWbsbTTeqXCgyAtFcFvEqn() ;

constexpr ::System::Object* const& __cordl_internal_get__customIdentifier() const;

constexpr ::System::Object*& __cordl_internal_get__customIdentifier() ;

constexpr ::StringW const& __cordl_internal_get__customName() const;

constexpr ::StringW& __cordl_internal_get__customName() ;

constexpr ::StringW const& __cordl_internal_get__deviceName() const;

constexpr ::StringW& __cordl_internal_get__deviceName() ;

constexpr bool const& __cordl_internal_get__isConnected() const;

constexpr bool& __cordl_internal_get__isConnected() ;

constexpr ::System::Guid const& __cordl_internal_get__persistentGuid() const;

constexpr ::System::Guid& __cordl_internal_get__persistentGuid() ;

constexpr void __cordl_internal_set_LEmVVQDWbsbTTeqXCgyAtFcFvEqn(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__customIdentifier(::System::Object*  value) ;

constexpr void __cordl_internal_set__customName(::StringW  value) ;

constexpr void __cordl_internal_set__deviceName(::StringW  value) ;

constexpr void __cordl_internal_set__isConnected(bool  value) ;

constexpr void __cordl_internal_set__persistentGuid(::System::Guid  value) ;

/// @brief Method .ctor, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method add_ConnectedStateChangedEvent, addr 0x18187c8b0, size 0x90, virtual false, abstract: false, final false
inline void add_ConnectedStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method get_customIdentifier, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_customIdentifier() ;

/// @brief Method get_customName, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_customName() ;

/// @brief Method get_deviceInstanceGuid, addr 0x1802e30e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_deviceName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_deviceName() ;

/// @brief Method get_isConnected, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_isConnected() ;

/// @brief Method remove_ConnectedStateChangedEvent, addr 0x18187c940, size 0x90, virtual false, abstract: false, final false
inline void remove_ConnectedStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method set_customIdentifier, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_customIdentifier(::System::Object*  value) ;

/// @brief Method set_deviceInstanceGuid, addr 0x18187c9d0, size 0x10, virtual false, abstract: false, final false
inline void set_deviceInstanceGuid(::System::Guid  value) ;

/// @brief Method set_isConnected, addr 0x18187c9e0, size 0x70, virtual false, abstract: false, final false
inline void set_isConnected(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputSource_Controller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Controller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputSource_Controller(CustomInputSource_Controller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Controller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputSource_Controller(CustomInputSource_Controller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2288};

/// @brief Field _isConnected, offset: 0x10, size: 0x1, def value: None
 bool  ____isConnected;

/// @brief Field _deviceName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____deviceName;

/// @brief Field _customName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____customName;

/// @brief Field _customIdentifier, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____customIdentifier;

/// @brief Field _persistentGuid, offset: 0x30, size: 0x10, def value: None
 ::System::Guid  ____persistentGuid;

/// @brief Field LEmVVQDWbsbTTeqXCgyAtFcFvEqn, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___LEmVVQDWbsbTTeqXCgyAtFcFvEqn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Controller, ____isConnected) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Controller, ____deviceName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Controller, ____customName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Controller, ____customIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Controller, ____persistentGuid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Controller, ___LEmVVQDWbsbTTeqXCgyAtFcFvEqn) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomInputSource_Controller) == 0x48, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomInputSource/Element
class CORDL_TYPE CustomInputSource_Element : public ::System::Object {
public:
// Declarations
static inline ::Rewired::Platforms::Custom::CustomInputSource_Element* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputSource_Element() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Element", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputSource_Element(CustomInputSource_Element && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Element", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputSource_Element(CustomInputSource_Element const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::CustomInputSource_Element) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Platforms.Custom.CustomInputSource::Element
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomInputSource/Axis
class CORDL_TYPE CustomInputSource_Axis : public ::Rewired::Platforms::Custom::CustomInputSource_Element {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

static inline ::Rewired::Platforms::Custom::CustomInputSource_Axis* New_ctor() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputSource_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputSource_Axis(CustomInputSource_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputSource_Axis(CustomInputSource_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2291};

/// @brief Field value, offset: 0x10, size: 0x4, def value: None
 float_t  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Axis, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomInputSource_Axis) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Platforms.Custom.CustomInputSource::Element
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomInputSource/Button
class CORDL_TYPE CustomInputSource_Button : public ::Rewired::Platforms::Custom::CustomInputSource_Element {
public:
// Declarations
 __declspec(property(get=PfMZjqgsntlMiRbbqzPIwYUblaDj)) bool  JsKyemeWSRLFGYagMJfJMVkmarLG;

/// @brief Field MUCVeNDXkTsFqGGZRxQHfxqvLhYp, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_MUCVeNDXkTsFqGGZRxQHfxqvLhYp, put=__cordl_internal_set_MUCVeNDXkTsFqGGZRxQHfxqvLhYp)) bool  MUCVeNDXkTsFqGGZRxQHfxqvLhYp;

 __declspec(property(get=get_boolValue, put=set_boolValue)) bool  boolValue;

 __declspec(property(get=get_floatValue, put=set_floatValue)) float_t  floatValue;

/// @brief Field nyYhavUhVAEHiSxUsJoWNFPOApdIA, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_nyYhavUhVAEHiSxUsJoWNFPOApdIA, put=__cordl_internal_set_nyYhavUhVAEHiSxUsJoWNFPOApdIA)) float_t  nyYhavUhVAEHiSxUsJoWNFPOApdIA;

/// @brief Field value, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) bool  value;

/// @brief Method IaLIwTyTnifgKaUdGXmWrcHmhdoW, addr 0x1818762d0, size 0x10, virtual false, abstract: false, final false
inline void IaLIwTyTnifgKaUdGXmWrcHmhdoW() ;

static inline ::Rewired::Platforms::Custom::CustomInputSource_Button* New_ctor() ;

/// @brief Method PfMZjqgsntlMiRbbqzPIwYUblaDj, addr 0x1818762e0, size 0x10, virtual false, abstract: false, final false
inline bool PfMZjqgsntlMiRbbqzPIwYUblaDj() ;

constexpr bool const& __cordl_internal_get_MUCVeNDXkTsFqGGZRxQHfxqvLhYp() const;

constexpr bool& __cordl_internal_get_MUCVeNDXkTsFqGGZRxQHfxqvLhYp() ;

constexpr float_t const& __cordl_internal_get_nyYhavUhVAEHiSxUsJoWNFPOApdIA() const;

constexpr float_t& __cordl_internal_get_nyYhavUhVAEHiSxUsJoWNFPOApdIA() ;

constexpr bool const& __cordl_internal_get_value() const;

constexpr bool& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_MUCVeNDXkTsFqGGZRxQHfxqvLhYp(bool  value) ;

constexpr void __cordl_internal_set_nyYhavUhVAEHiSxUsJoWNFPOApdIA(float_t  value) ;

constexpr void __cordl_internal_set_value(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_boolValue, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_boolValue() ;

/// @brief Method get_floatValue, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_floatValue() ;

/// @brief Method set_boolValue, addr 0x1818762f0, size 0x20, virtual false, abstract: false, final false
inline void set_boolValue(bool  value) ;

/// @brief Method set_floatValue, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_floatValue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputSource_Button() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Button", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputSource_Button(CustomInputSource_Button && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Button", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputSource_Button(CustomInputSource_Button const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2292};

/// @brief Field value, offset: 0x10, size: 0x1, def value: None
 bool  ___value;

/// @brief Field nyYhavUhVAEHiSxUsJoWNFPOApdIA, offset: 0x14, size: 0x4, def value: None
 float_t  ___nyYhavUhVAEHiSxUsJoWNFPOApdIA;

/// @brief Field MUCVeNDXkTsFqGGZRxQHfxqvLhYp, offset: 0x18, size: 0x1, def value: None
 bool  ___MUCVeNDXkTsFqGGZRxQHfxqvLhYp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Button, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Button, ___nyYhavUhVAEHiSxUsJoWNFPOApdIA) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Button, ___MUCVeNDXkTsFqGGZRxQHfxqvLhYp) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomInputSource_Button) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Platforms.Custom.CustomInputSource::Axis, Rewired.Platforms.Custom.CustomInputSource::Button, Rewired.Platforms.Custom.CustomInputSource::Controller, System.Nullable`1<T>
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomInputSource/Joystick
class CORDL_TYPE CustomInputSource_Joystick : public ::Rewired::Platforms::Custom::CustomInputSource_Controller {
public:
// Declarations
 __declspec(property(get=get_Axes)) ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*  Axes;

 __declspec(property(get=get_Buttons)) ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*  Buttons;

/// @brief Field CbTjcLKtkZcBeWKArZMMbzwJyZuGA, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_CbTjcLKtkZcBeWKArZMMbzwJyZuGA, put=__cordl_internal_set_CbTjcLKtkZcBeWKArZMMbzwJyZuGA)) ::Rewired::Controller_Extension*  CbTjcLKtkZcBeWKArZMMbzwJyZuGA;

/// @brief Field GGLBxnjvVqAiSOBbhvvaUXmTGgaH, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_GGLBxnjvVqAiSOBbhvvaUXmTGgaH, put=__cordl_internal_set_GGLBxnjvVqAiSOBbhvvaUXmTGgaH)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*  GGLBxnjvVqAiSOBbhvvaUXmTGgaH;

/// @brief Field KzULjmdgyAdaATGMZXfHGfryywoS, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_KzULjmdgyAdaATGMZXfHGfryywoS, put=__cordl_internal_set_KzULjmdgyAdaATGMZXfHGfryywoS)) ::System::Nullable_1<int64_t>  KzULjmdgyAdaATGMZXfHGfryywoS;

/// @brief Field NPNXkNyAWJYarQtDFpRPpQppHLsO, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_NPNXkNyAWJYarQtDFpRPpQppHLsO, put=__cordl_internal_set_NPNXkNyAWJYarQtDFpRPpQppHLsO)) bool  NPNXkNyAWJYarQtDFpRPpQppHLsO;

/// @brief Field QHYeWpozKqvrSNFFjaukivCJveXTA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_QHYeWpozKqvrSNFFjaukivCJveXTA, put=__cordl_internal_set_QHYeWpozKqvrSNFFjaukivCJveXTA)) ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*>  QHYeWpozKqvrSNFFjaukivCJveXTA;

/// @brief Field YncdSlNBxkCYJbrSOmlFDMCdLPttA, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_YncdSlNBxkCYJbrSOmlFDMCdLPttA, put=__cordl_internal_set_YncdSlNBxkCYJbrSOmlFDMCdLPttA)) ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*>  YncdSlNBxkCYJbrSOmlFDMCdLPttA;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_extension, put=set_extension)) ::Rewired::Controller_Extension*  extension;

/// @brief Field pVUQodXyBWgHtUxZKoyOsVYhdcIK, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_pVUQodXyBWgHtUxZKoyOsVYhdcIK, put=__cordl_internal_set_pVUQodXyBWgHtUxZKoyOsVYhdcIK)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*  pVUQodXyBWgHtUxZKoyOsVYhdcIK;

 __declspec(property(get=get_supportsVibration, put=set_supportsVibration)) bool  supportsVibration;

 __declspec(property(get=get_systemId, put=set_systemId)) ::System::Nullable_1<int64_t>  systemId;

 __declspec(property(get=get_unityId, put=set_unityId)) int32_t  unityId;

/// @brief Field ydAoSpoJiIOXmhROIaRikdLJEyLBA, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_ydAoSpoJiIOXmhROIaRikdLJEyLBA, put=__cordl_internal_set_ydAoSpoJiIOXmhROIaRikdLJEyLBA)) int32_t  ydAoSpoJiIOXmhROIaRikdLJEyLBA;

/// @brief Method GetAxisValue, addr 0x181881680, size 0x40, virtual true, abstract: false, final false
inline float_t GetAxisValue(int32_t  index) ;

/// @brief Method GetButtonFloatValue, addr 0x1818816c0, size 0x40, virtual true, abstract: false, final false
inline float_t GetButtonFloatValue(int32_t  index) ;

/// @brief Method GetButtonValue, addr 0x181881700, size 0x40, virtual true, abstract: false, final false
inline bool GetButtonValue(int32_t  index) ;

static inline ::Rewired::Platforms::Custom::CustomInputSource_Joystick* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4) ;

static inline ::Rewired::Platforms::Custom::CustomInputSource_Joystick* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method SetAxisValue, addr 0x181881740, size 0x40, virtual true, abstract: false, final false
inline void SetAxisValue(int32_t  index, float_t  value) ;

/// @brief Method SetButtonFloatValue, addr 0x181881780, size 0x40, virtual true, abstract: false, final false
inline void SetButtonFloatValue(int32_t  index, float_t  value) ;

/// @brief Method SetButtonValue, addr 0x1818817c0, size 0x50, virtual true, abstract: false, final false
inline void SetButtonValue(int32_t  index, bool  value) ;

constexpr ::Rewired::Controller_Extension* const& __cordl_internal_get_CbTjcLKtkZcBeWKArZMMbzwJyZuGA() const;

constexpr ::Rewired::Controller_Extension*& __cordl_internal_get_CbTjcLKtkZcBeWKArZMMbzwJyZuGA() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>* const& __cordl_internal_get_GGLBxnjvVqAiSOBbhvvaUXmTGgaH() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*& __cordl_internal_get_GGLBxnjvVqAiSOBbhvvaUXmTGgaH() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get_KzULjmdgyAdaATGMZXfHGfryywoS() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get_KzULjmdgyAdaATGMZXfHGfryywoS() ;

constexpr bool const& __cordl_internal_get_NPNXkNyAWJYarQtDFpRPpQppHLsO() const;

constexpr bool& __cordl_internal_get_NPNXkNyAWJYarQtDFpRPpQppHLsO() ;

constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*> const& __cordl_internal_get_QHYeWpozKqvrSNFFjaukivCJveXTA() const;

constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*>& __cordl_internal_get_QHYeWpozKqvrSNFFjaukivCJveXTA() ;

constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*> const& __cordl_internal_get_YncdSlNBxkCYJbrSOmlFDMCdLPttA() const;

constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*>& __cordl_internal_get_YncdSlNBxkCYJbrSOmlFDMCdLPttA() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>* const& __cordl_internal_get_pVUQodXyBWgHtUxZKoyOsVYhdcIK() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*& __cordl_internal_get_pVUQodXyBWgHtUxZKoyOsVYhdcIK() ;

constexpr int32_t const& __cordl_internal_get_ydAoSpoJiIOXmhROIaRikdLJEyLBA() const;

constexpr int32_t& __cordl_internal_get_ydAoSpoJiIOXmhROIaRikdLJEyLBA() ;

constexpr void __cordl_internal_set_CbTjcLKtkZcBeWKArZMMbzwJyZuGA(::Rewired::Controller_Extension*  value) ;

constexpr void __cordl_internal_set_GGLBxnjvVqAiSOBbhvvaUXmTGgaH(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*  value) ;

constexpr void __cordl_internal_set_KzULjmdgyAdaATGMZXfHGfryywoS(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set_NPNXkNyAWJYarQtDFpRPpQppHLsO(bool  value) ;

constexpr void __cordl_internal_set_QHYeWpozKqvrSNFFjaukivCJveXTA(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*>  value) ;

constexpr void __cordl_internal_set_YncdSlNBxkCYJbrSOmlFDMCdLPttA(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*>  value) ;

constexpr void __cordl_internal_set_pVUQodXyBWgHtUxZKoyOsVYhdcIK(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*  value) ;

constexpr void __cordl_internal_set_ydAoSpoJiIOXmhROIaRikdLJEyLBA(int32_t  value) ;

/// @brief Method .ctor, addr 0x181881810, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method .ctor, addr 0x1818819c0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ciBYAeFhtsMAsXlLpLpBwJfliFVn, addr 0x181881ac0, size 0x70, virtual false, abstract: false, final false
inline void ciBYAeFhtsMAsXlLpLpBwJfliFVn(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_Axes, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>* get_Axes() ;

/// @brief Method get_Buttons, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>* get_Buttons() ;

/// @brief Method get_axisCount, addr 0x181881b30, size 0x20, virtual false, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x181881b50, size 0x20, virtual false, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_extension, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Controller_Extension* get_extension() ;

/// @brief Method get_supportsVibration, addr 0x1802e56a0, size 0x10, virtual false, abstract: false, final false
inline bool get_supportsVibration() ;

/// @brief Method get_systemId, addr 0x18051ea30, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_systemId() ;

/// @brief Method get_unityId, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline int32_t get_unityId() ;

/// @brief Method jonGbJbzbOHyojKWqbDBkqmAIQmSA, addr 0x181881b70, size 0x60, virtual true, abstract: false, final false
inline void jonGbJbzbOHyojKWqbDBkqmAIQmSA() ;

/// @brief Method set_extension, addr 0x181881bd0, size 0x50, virtual false, abstract: false, final false
inline void set_extension(::Rewired::Controller_Extension*  value) ;

/// @brief Method set_supportsVibration, addr 0x1813bddf0, size 0x1ac0, virtual false, abstract: false, final false
inline void set_supportsVibration(bool  value) ;

/// @brief Method set_systemId, addr 0x1817eed60, size 0x10, virtual false, abstract: false, final false
inline void set_systemId(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_unityId, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_unityId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputSource_Joystick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Joystick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputSource_Joystick(CustomInputSource_Joystick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource_Joystick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputSource_Joystick(CustomInputSource_Joystick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2289};

/// @brief Field KzULjmdgyAdaATGMZXfHGfryywoS, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ___KzULjmdgyAdaATGMZXfHGfryywoS;

/// @brief Field ydAoSpoJiIOXmhROIaRikdLJEyLBA, offset: 0x58, size: 0x4, def value: None
 int32_t  ___ydAoSpoJiIOXmhROIaRikdLJEyLBA;

/// @brief Field QHYeWpozKqvrSNFFjaukivCJveXTA, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*>  ___QHYeWpozKqvrSNFFjaukivCJveXTA;

/// @brief Field YncdSlNBxkCYJbrSOmlFDMCdLPttA, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*>  ___YncdSlNBxkCYJbrSOmlFDMCdLPttA;

/// @brief Field pVUQodXyBWgHtUxZKoyOsVYhdcIK, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*  ___pVUQodXyBWgHtUxZKoyOsVYhdcIK;

/// @brief Field GGLBxnjvVqAiSOBbhvvaUXmTGgaH, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*  ___GGLBxnjvVqAiSOBbhvvaUXmTGgaH;

/// @brief Field NPNXkNyAWJYarQtDFpRPpQppHLsO, offset: 0x80, size: 0x1, def value: None
 bool  ___NPNXkNyAWJYarQtDFpRPpQppHLsO;

/// @brief Field CbTjcLKtkZcBeWKArZMMbzwJyZuGA, offset: 0x88, size: 0x8, def value: None
 ::Rewired::Controller_Extension*  ___CbTjcLKtkZcBeWKArZMMbzwJyZuGA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___KzULjmdgyAdaATGMZXfHGfryywoS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___ydAoSpoJiIOXmhROIaRikdLJEyLBA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___QHYeWpozKqvrSNFFjaukivCJveXTA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___YncdSlNBxkCYJbrSOmlFDMCdLPttA) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___pVUQodXyBWgHtUxZKoyOsVYhdcIK) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___GGLBxnjvVqAiSOBbhvvaUXmTGgaH) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___NPNXkNyAWJYarQtDFpRPpQppHLsO) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource_Joystick, ___CbTjcLKtkZcBeWKArZMMbzwJyZuGA) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomInputSource_Joystick) == 0x90, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.InputSource, System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomInputSource
class CORDL_TYPE CustomInputSource : public ::System::Object {
public:
// Declarations
using Axis = ::Rewired::Platforms::Custom::CustomInputSource_Axis;

using Button = ::Rewired::Platforms::Custom::CustomInputSource_Button;

using Controller = ::Rewired::Platforms::Custom::CustomInputSource_Controller;

using Element = ::Rewired::Platforms::Custom::CustomInputSource_Element;

using Joystick = ::Rewired::Platforms::Custom::CustomInputSource_Joystick;

/// @brief Field ErxcwlPPmzZZfMXLVdAMDqgVeIaKA, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA, put=__cordl_internal_set_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA)) ::System::Action*  ErxcwlPPmzZZfMXLVdAMDqgVeIaKA;

/// @brief Field GjBmLdGunNAFHWRXRGqqeOGewtAA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_GjBmLdGunNAFHWRXRGqqeOGewtAA, put=__cordl_internal_set_GjBmLdGunNAFHWRXRGqqeOGewtAA)) ::Rewired::Interfaces::IUnifiedMouseSource*  GjBmLdGunNAFHWRXRGqqeOGewtAA;

/// @brief Field IHlVFsjOfHyuNsfwugPFdnGXJkfhb, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IHlVFsjOfHyuNsfwugPFdnGXJkfhb, put=__cordl_internal_set_IHlVFsjOfHyuNsfwugPFdnGXJkfhb)) bool  IHlVFsjOfHyuNsfwugPFdnGXJkfhb;

/// @brief Field RiCAqLZRGrvfsTpCmHBxByKKEziPA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RiCAqLZRGrvfsTpCmHBxByKKEziPA, put=__cordl_internal_set_RiCAqLZRGrvfsTpCmHBxByKKEziPA)) ::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  RiCAqLZRGrvfsTpCmHBxByKKEziPA;

/// @brief Field WvcaYIdFBeMMLAEKIAZTuaFbLBot, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_WvcaYIdFBeMMLAEKIAZTuaFbLBot, put=__cordl_internal_set_WvcaYIdFBeMMLAEKIAZTuaFbLBot)) ::System::Action*  WvcaYIdFBeMMLAEKIAZTuaFbLBot;

 __declspec(property(get=BwqGWxvNuOgmhXXYqKqGfpebWsHq)) ::Rewired::InputSource  bkhDzrRvvoBGcjKtZAdpHtrmKjMFA;

/// @brief Field dziOWgRRbVHQaBVOMcFLucbwjDjr, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_dziOWgRRbVHQaBVOMcFLucbwjDjr, put=__cordl_internal_set_dziOWgRRbVHQaBVOMcFLucbwjDjr)) ::Rewired::InputSource  dziOWgRRbVHQaBVOMcFLucbwjDjr;

 __declspec(property(get=get_isReady)) bool  isReady;

/// @brief Field kojqcwYyCJbvkLgxxOKLLyrWngnH, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_kojqcwYyCJbvkLgxxOKLLyrWngnH, put=__cordl_internal_set_kojqcwYyCJbvkLgxxOKLLyrWngnH)) bool  kojqcwYyCJbvkLgxxOKLLyrWngnH;

/// @brief Field qWWaAzzkZrUmhgENEYZlnOKHAXxp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_qWWaAzzkZrUmhgENEYZlnOKHAXxp, put=__cordl_internal_set_qWWaAzzkZrUmhgENEYZlnOKHAXxp)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  qWWaAzzkZrUmhgENEYZlnOKHAXxp;

/// @brief Field sdbYLOXkGVIpXKaZYEBnEzcVWIFK, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sdbYLOXkGVIpXKaZYEBnEzcVWIFK, put=__cordl_internal_set_sdbYLOXkGVIpXKaZYEBnEzcVWIFK)) ::Rewired::Interfaces::IUnifiedKeyboardSource*  sdbYLOXkGVIpXKaZYEBnEzcVWIFK;

 __declspec(property(get=get_useApproximateMatching, put=set_useApproximateMatching)) bool  useApproximateMatching;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddJoystick, addr 0x18187e5e0, size 0x190, virtual false, abstract: false, final false
inline void AddJoystick(::Rewired::Platforms::Custom::CustomInputSource_Joystick*  joystick) ;

/// @brief Method BhpfXTMFOtIrRdvRvmcNSHBzwBgQA, addr 0x18187e770, size 0x30, virtual false, abstract: false, final false
inline void BhpfXTMFOtIrRdvRvmcNSHBzwBgQA(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BwqGWxvNuOgmhXXYqKqGfpebWsHq, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::InputSource BwqGWxvNuOgmhXXYqKqGfpebWsHq() ;

/// @brief Method CyFvxHSzaPybaIpPBBSMDyIhxQBb, addr 0x18062c4e0, size 0x80, virtual false, abstract: false, final false
inline void CyFvxHSzaPybaIpPBBSMDyIhxQBb(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Dispose, addr 0x1815e7730, size 0x30, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18187e7a0, size 0x110, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EaHYmXRsOqetdvIQoATJJrHnfnMEA, addr 0x18062c670, size 0x80, virtual false, abstract: false, final false
inline void EaHYmXRsOqetdvIQoATJJrHnfnMEA(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Finalize, addr 0x1815e7430, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetJoysticks, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* GetJoysticks() ;

/// @brief Method GyTfLCfjJGNNbgEyetKAynjmyntFA, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::IUnifiedMouseSource* GyTfLCfjJGNNbgEyetKAynjmyntFA() ;

/// @brief Method IaRVALOxwNNtYeNThPAvKFkoJEzy, addr 0x181163b60, size 0x1b0, virtual true, abstract: false, final false
inline void IaRVALOxwNNtYeNThPAvKFkoJEzy() ;

/// @brief Method LlZgepKewlNrVuDxFsWDQObnSCwM, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::IUnifiedKeyboardSource* LlZgepKewlNrVuDxFsWDQObnSCwM() ;

static inline ::Rewired::Platforms::Custom::CustomInputSource* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Platforms::Custom::CustomInputSource* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method OnInitialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method OnJoystickConnected, addr 0x18187e8b0, size 0x20, virtual true, abstract: false, final false
inline void OnJoystickConnected() ;

/// @brief Method OnJoystickDisconnected, addr 0x18187e8d0, size 0x20, virtual true, abstract: false, final false
inline void OnJoystickDisconnected() ;

/// @brief Method PtFmrZzXmmrPCmzllUqEkHGtVUbf, addr 0x18187e8f0, size 0xd0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*> PtFmrZzXmmrPCmzllUqEkHGtVUbf() ;

/// @brief Method RemoveJoystick, addr 0x18187e9c0, size 0x150, virtual false, abstract: false, final false
inline void RemoveJoystick(::Rewired::Platforms::Custom::CustomInputSource_Joystick*  joystick) ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method YuLmZqeRZzjIfFDXTFbUkaYnikkK, addr 0x18062c670, size 0x80, virtual false, abstract: false, final false
inline void YuLmZqeRZzjIfFDXTFbUkaYnikkK(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Action* const& __cordl_internal_get_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA() const;

constexpr ::System::Action*& __cordl_internal_get_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA() ;

constexpr ::Rewired::Interfaces::IUnifiedMouseSource* const& __cordl_internal_get_GjBmLdGunNAFHWRXRGqqeOGewtAA() const;

constexpr ::Rewired::Interfaces::IUnifiedMouseSource*& __cordl_internal_get_GjBmLdGunNAFHWRXRGqqeOGewtAA() ;

constexpr bool const& __cordl_internal_get_IHlVFsjOfHyuNsfwugPFdnGXJkfhb() const;

constexpr bool& __cordl_internal_get_IHlVFsjOfHyuNsfwugPFdnGXJkfhb() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* const& __cordl_internal_get_RiCAqLZRGrvfsTpCmHBxByKKEziPA() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*& __cordl_internal_get_RiCAqLZRGrvfsTpCmHBxByKKEziPA() ;

constexpr ::System::Action* const& __cordl_internal_get_WvcaYIdFBeMMLAEKIAZTuaFbLBot() const;

constexpr ::System::Action*& __cordl_internal_get_WvcaYIdFBeMMLAEKIAZTuaFbLBot() ;

constexpr ::Rewired::InputSource const& __cordl_internal_get_dziOWgRRbVHQaBVOMcFLucbwjDjr() const;

constexpr ::Rewired::InputSource& __cordl_internal_get_dziOWgRRbVHQaBVOMcFLucbwjDjr() ;

constexpr bool const& __cordl_internal_get_kojqcwYyCJbvkLgxxOKLLyrWngnH() const;

constexpr bool& __cordl_internal_get_kojqcwYyCJbvkLgxxOKLLyrWngnH() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* const& __cordl_internal_get_qWWaAzzkZrUmhgENEYZlnOKHAXxp() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*& __cordl_internal_get_qWWaAzzkZrUmhgENEYZlnOKHAXxp() ;

constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* const& __cordl_internal_get_sdbYLOXkGVIpXKaZYEBnEzcVWIFK() const;

constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource*& __cordl_internal_get_sdbYLOXkGVIpXKaZYEBnEzcVWIFK() ;

constexpr void __cordl_internal_set_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA(::System::Action*  value) ;

constexpr void __cordl_internal_set_GjBmLdGunNAFHWRXRGqqeOGewtAA(::Rewired::Interfaces::IUnifiedMouseSource*  value) ;

constexpr void __cordl_internal_set_IHlVFsjOfHyuNsfwugPFdnGXJkfhb(bool  value) ;

constexpr void __cordl_internal_set_RiCAqLZRGrvfsTpCmHBxByKKEziPA(::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  value) ;

constexpr void __cordl_internal_set_WvcaYIdFBeMMLAEKIAZTuaFbLBot(::System::Action*  value) ;

constexpr void __cordl_internal_set_dziOWgRRbVHQaBVOMcFLucbwjDjr(::Rewired::InputSource  value) ;

constexpr void __cordl_internal_set_kojqcwYyCJbvkLgxxOKLLyrWngnH(bool  value) ;

constexpr void __cordl_internal_set_qWWaAzzkZrUmhgENEYZlnOKHAXxp(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  value) ;

constexpr void __cordl_internal_set_sdbYLOXkGVIpXKaZYEBnEzcVWIFK(::Rewired::Interfaces::IUnifiedKeyboardSource*  value) ;

/// @brief Method .ctor, addr 0x18187eb60, size 0x100, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18187eb10, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_isReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isReady() ;

/// @brief Method get_useApproximateMatching, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_useApproximateMatching() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method kFbPyBoWCeZrASiELSfdRzwYTobc, addr 0x18062c460, size 0x80, virtual false, abstract: false, final false
inline void kFbPyBoWCeZrASiELSfdRzwYTobc(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method loSYjVMZvlBRqssnSkqODONIlbOl, addr 0x18062c4e0, size 0x80, virtual false, abstract: false, final false
inline void loSYjVMZvlBRqssnSkqODONIlbOl(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nUuyEnjvGpKcUNGQKLoWSYWKhHLn, addr 0x18062c460, size 0x80, virtual false, abstract: false, final false
inline void nUuyEnjvGpKcUNGQKLoWSYWKhHLn(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qzqYHbhjgPQSjwVgwGSFtgqXKAom, addr 0x18062c5f0, size 0x80, virtual false, abstract: false, final false
inline void qzqYHbhjgPQSjwVgwGSFtgqXKAom(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_useApproximateMatching, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_useApproximateMatching(bool  value) ;

/// @brief Method ycBYLnACizIPIiNjCFxwSzcoodJIA, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ycBYLnACizIPIiNjCFxwSzcoodJIA() ;

/// @brief Method zgxRUUsgCAfHbgIeSopBcSMCulMc, addr 0x18062c5f0, size 0x80, virtual false, abstract: false, final false
inline void zgxRUUsgCAfHbgIeSopBcSMCulMc(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputSource(CustomInputSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputSource(CustomInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2293};

/// @brief Field dziOWgRRbVHQaBVOMcFLucbwjDjr, offset: 0x10, size: 0x4, def value: None
 ::Rewired::InputSource  ___dziOWgRRbVHQaBVOMcFLucbwjDjr;

/// @brief Field RiCAqLZRGrvfsTpCmHBxByKKEziPA, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  ___RiCAqLZRGrvfsTpCmHBxByKKEziPA;

/// @brief Field qWWaAzzkZrUmhgENEYZlnOKHAXxp, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  ___qWWaAzzkZrUmhgENEYZlnOKHAXxp;

/// @brief Field IHlVFsjOfHyuNsfwugPFdnGXJkfhb, offset: 0x28, size: 0x1, def value: None
 bool  ___IHlVFsjOfHyuNsfwugPFdnGXJkfhb;

/// @brief Field sdbYLOXkGVIpXKaZYEBnEzcVWIFK, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Interfaces::IUnifiedKeyboardSource*  ___sdbYLOXkGVIpXKaZYEBnEzcVWIFK;

/// @brief Field GjBmLdGunNAFHWRXRGqqeOGewtAA, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Interfaces::IUnifiedMouseSource*  ___GjBmLdGunNAFHWRXRGqqeOGewtAA;

/// @brief Field ErxcwlPPmzZZfMXLVdAMDqgVeIaKA, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___ErxcwlPPmzZZfMXLVdAMDqgVeIaKA;

/// @brief Field WvcaYIdFBeMMLAEKIAZTuaFbLBot, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___WvcaYIdFBeMMLAEKIAZTuaFbLBot;

/// @brief Field kojqcwYyCJbvkLgxxOKLLyrWngnH, offset: 0x50, size: 0x1, def value: None
 bool  ___kojqcwYyCJbvkLgxxOKLLyrWngnH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___dziOWgRRbVHQaBVOMcFLucbwjDjr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___RiCAqLZRGrvfsTpCmHBxByKKEziPA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___qWWaAzzkZrUmhgENEYZlnOKHAXxp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___IHlVFsjOfHyuNsfwugPFdnGXJkfhb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___sdbYLOXkGVIpXKaZYEBnEzcVWIFK) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___GjBmLdGunNAFHWRXRGqqeOGewtAA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___ErxcwlPPmzZZfMXLVdAMDqgVeIaKA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___WvcaYIdFBeMMLAEKIAZTuaFbLBot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomInputSource, ___kojqcwYyCJbvkLgxxOKLLyrWngnH) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomInputSource) == 0x58, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
