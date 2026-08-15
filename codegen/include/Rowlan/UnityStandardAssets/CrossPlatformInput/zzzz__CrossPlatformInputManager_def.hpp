#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/CrossPlatformInputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrossPlatformInputManager)
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct CrossPlatformInputManager_ActiveInputMethod;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualAxis;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualButton;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class VirtualInput;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
struct CrossPlatformInputManager_ActiveInputMethod;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualAxis;
}
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
class CrossPlatformInputManager_VirtualButton;
}
// Write type traits
MARK_VAL_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod);
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*);
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*);
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod, "Rowlan.UnityStandardAssets.CrossPlatformInput", "CrossPlatformInputManager/ActiveInputMethod");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "CrossPlatformInputManager");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "CrossPlatformInputManager/VirtualAxis");
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*, "Rowlan.UnityStandardAssets.CrossPlatformInput", "CrossPlatformInputManager/VirtualButton");
// Dependencies 
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: true
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct CORDL_TYPE CrossPlatformInputManager_ActiveInputMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CrossPlatformInputManager_ActiveInputMethod_Unwrapped
enum struct __CrossPlatformInputManager_ActiveInputMethod_Unwrapped : int32_t {
__E_Hardware = static_cast<int32_t>(0x0),
__E_Touch = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CrossPlatformInputManager_ActiveInputMethod_Unwrapped () const noexcept {
return static_cast<__CrossPlatformInputManager_ActiveInputMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CrossPlatformInputManager_ActiveInputMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CrossPlatformInputManager_ActiveInputMethod(int32_t  value__) noexcept;

/// @brief Field Hardware value: I32(0)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod const Hardware;

/// @brief Field Touch value: I32(1)
static ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod const Touch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies System.Object
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
class CORDL_TYPE CrossPlatformInputManager_VirtualAxis : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_GetValue)) float_t  GetValue;

 __declspec(property(get=get_GetValueRaw)) float_t  GetValueRaw;

/// @brief Field <matchWithInputManager>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__matchWithInputManager_k__BackingField, put=__cordl_internal_set__matchWithInputManager_k__BackingField)) bool  _matchWithInputManager_k__BackingField;

/// @brief Field <name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_k__BackingField, put=__cordl_internal_set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field m_Value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) float_t  m_Value;

 __declspec(property(get=get_matchWithInputManager, put=set_matchWithInputManager)) bool  matchWithInputManager;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* New_ctor(::StringW  name) ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* New_ctor(::StringW  name, bool  matchToInputSettings) ;

/// @brief Method Remove, addr 0x181ac2300, size 0xc0, virtual false, abstract: false, final false
inline void Remove() ;

/// @brief Method Update, addr 0x1804bdb50, size 0x10, virtual false, abstract: false, final false
inline void Update(float_t  value) ;

constexpr bool const& __cordl_internal_get__matchWithInputManager_k__BackingField() const;

constexpr bool& __cordl_internal_get__matchWithInputManager_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__name_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_Value() const;

constexpr float_t& __cordl_internal_get_m_Value() ;

constexpr void __cordl_internal_set__matchWithInputManager_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_m_Value(float_t  value) ;

/// @brief Method .ctor, addr 0x181ac23f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x181ac23c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  matchToInputSettings) ;

/// @brief Method get_GetValue, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_GetValue() ;

/// @brief Method get_GetValueRaw, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_GetValueRaw() ;

/// @brief Method get_matchWithInputManager, addr 0x1804bdaf0, size 0x10, virtual false, abstract: false, final false
inline bool get_matchWithInputManager() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method set_matchWithInputManager, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_matchWithInputManager(bool  value) ;

/// @brief Method set_name, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrossPlatformInputManager_VirtualAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrossPlatformInputManager_VirtualAxis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossPlatformInputManager_VirtualAxis(CrossPlatformInputManager_VirtualAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossPlatformInputManager_VirtualAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossPlatformInputManager_VirtualAxis(CrossPlatformInputManager_VirtualAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20352};

/// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name_k__BackingField;

/// @brief Field m_Value, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_Value;

/// @brief Field <matchWithInputManager>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____matchWithInputManager_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis, ___m_Value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis, ____matchWithInputManager_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies System.Object
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
class CORDL_TYPE CrossPlatformInputManager_VirtualButton : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_GetButton)) bool  GetButton;

 __declspec(property(get=get_GetButtonDown)) bool  GetButtonDown;

 __declspec(property(get=get_GetButtonUp)) bool  GetButtonUp;

/// @brief Field <matchWithInputManager>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__matchWithInputManager_k__BackingField, put=__cordl_internal_set__matchWithInputManager_k__BackingField)) bool  _matchWithInputManager_k__BackingField;

/// @brief Field <name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_k__BackingField, put=__cordl_internal_set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field m_LastPressedFrame, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastPressedFrame, put=__cordl_internal_set_m_LastPressedFrame)) int32_t  m_LastPressedFrame;

/// @brief Field m_Pressed, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Pressed, put=__cordl_internal_set_m_Pressed)) bool  m_Pressed;

/// @brief Field m_ReleasedFrame, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ReleasedFrame, put=__cordl_internal_set_m_ReleasedFrame)) int32_t  m_ReleasedFrame;

 __declspec(property(get=get_matchWithInputManager, put=set_matchWithInputManager)) bool  matchWithInputManager;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton* New_ctor(::StringW  name) ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton* New_ctor(::StringW  name, bool  matchToInputSettings) ;

/// @brief Method Pressed, addr 0x181ac2410, size 0x30, virtual false, abstract: false, final false
inline void Pressed() ;

/// @brief Method Released, addr 0x181ac2440, size 0x20, virtual false, abstract: false, final false
inline void Released() ;

/// @brief Method Remove, addr 0x181ac2460, size 0xa0, virtual false, abstract: false, final false
inline void Remove() ;

constexpr bool const& __cordl_internal_get__matchWithInputManager_k__BackingField() const;

constexpr bool& __cordl_internal_get__matchWithInputManager_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__name_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_LastPressedFrame() const;

constexpr int32_t& __cordl_internal_get_m_LastPressedFrame() ;

constexpr bool const& __cordl_internal_get_m_Pressed() const;

constexpr bool& __cordl_internal_get_m_Pressed() ;

constexpr int32_t const& __cordl_internal_get_m_ReleasedFrame() const;

constexpr int32_t& __cordl_internal_get_m_ReleasedFrame() ;

constexpr void __cordl_internal_set__matchWithInputManager_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_m_LastPressedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_Pressed(bool  value) ;

constexpr void __cordl_internal_set_m_ReleasedFrame(int32_t  value) ;

/// @brief Method .ctor, addr 0x181ac2540, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x181ac2500, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  matchToInputSettings) ;

/// @brief Method get_GetButton, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_GetButton() ;

/// @brief Method get_GetButtonDown, addr 0x181ac2570, size 0x20, virtual false, abstract: false, final false
inline bool get_GetButtonDown() ;

/// @brief Method get_GetButtonUp, addr 0x181ac2590, size 0x20, virtual false, abstract: false, final false
inline bool get_GetButtonUp() ;

/// @brief Method get_matchWithInputManager, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_matchWithInputManager() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method set_matchWithInputManager, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_matchWithInputManager(bool  value) ;

/// @brief Method set_name, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrossPlatformInputManager_VirtualButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrossPlatformInputManager_VirtualButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossPlatformInputManager_VirtualButton(CrossPlatformInputManager_VirtualButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossPlatformInputManager_VirtualButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossPlatformInputManager_VirtualButton(CrossPlatformInputManager_VirtualButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20353};

/// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name_k__BackingField;

/// @brief Field <matchWithInputManager>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____matchWithInputManager_k__BackingField;

/// @brief Field m_LastPressedFrame, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_LastPressedFrame;

/// @brief Field m_ReleasedFrame, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_ReleasedFrame;

/// @brief Field m_Pressed, offset: 0x24, size: 0x1, def value: None
 bool  ___m_Pressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton, ____matchWithInputManager_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton, ___m_LastPressedFrame) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton, ___m_ReleasedFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton, ___m_Pressed) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
// Dependencies System.Object
namespace Rowlan::UnityStandardAssets::CrossPlatformInput {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
class CORDL_TYPE CrossPlatformInputManager : public ::System::Object {
public:
// Declarations
using ActiveInputMethod = ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod;

using VirtualAxis = ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis;

using VirtualButton = ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton;

/// @brief Field activeInput, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeInput, put=setStaticF_activeInput)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  activeInput;

/// @brief Field s_HardwareInput, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_HardwareInput, put=setStaticF_s_HardwareInput)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  s_HardwareInput;

/// @brief Field s_TouchInput, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TouchInput, put=setStaticF_s_TouchInput)) ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  s_TouchInput;

/// @brief Method AxisExists, addr 0x181abd3b0, size 0x60, virtual false, abstract: false, final false
static inline bool AxisExists(::StringW  name) ;

/// @brief Method ButtonExists, addr 0x181abd410, size 0x60, virtual false, abstract: false, final false
static inline bool ButtonExists(::StringW  name) ;

/// @brief Method GetAxis, addr 0x181abd4f0, size 0x80, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  name) ;

/// @brief Method GetAxis, addr 0x181abd570, size 0x70, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  name, bool  raw) ;

/// @brief Method GetAxisRaw, addr 0x181abd470, size 0x80, virtual false, abstract: false, final false
static inline float_t GetAxisRaw(::StringW  name) ;

/// @brief Method GetButton, addr 0x181abd6a0, size 0x60, virtual false, abstract: false, final false
static inline bool GetButton(::StringW  name) ;

/// @brief Method GetButtonDown, addr 0x181abd5e0, size 0x60, virtual false, abstract: false, final false
static inline bool GetButtonDown(::StringW  name) ;

/// @brief Method GetButtonUp, addr 0x181abd640, size 0x60, virtual false, abstract: false, final false
static inline bool GetButtonUp(::StringW  name) ;

/// @brief Method RegisterVirtualAxis, addr 0x181abd700, size 0x140, virtual false, abstract: false, final false
static inline void RegisterVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  axis) ;

/// @brief Method RegisterVirtualButton, addr 0x181abd840, size 0x140, virtual false, abstract: false, final false
static inline void RegisterVirtualButton(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*  button) ;

/// @brief Method SetAxis, addr 0x181abdaa0, size 0x70, virtual false, abstract: false, final false
static inline void SetAxis(::StringW  name, float_t  value) ;

/// @brief Method SetAxisNegative, addr 0x181abd980, size 0x60, virtual false, abstract: false, final false
static inline void SetAxisNegative(::StringW  name) ;

/// @brief Method SetAxisPositive, addr 0x181abd9e0, size 0x60, virtual false, abstract: false, final false
static inline void SetAxisPositive(::StringW  name) ;

/// @brief Method SetAxisZero, addr 0x181abda40, size 0x60, virtual false, abstract: false, final false
static inline void SetAxisZero(::StringW  name) ;

/// @brief Method SetButtonDown, addr 0x181abdb10, size 0x60, virtual false, abstract: false, final false
static inline void SetButtonDown(::StringW  name) ;

/// @brief Method SetButtonUp, addr 0x181abdb70, size 0x60, virtual false, abstract: false, final false
static inline void SetButtonUp(::StringW  name) ;

/// @brief Method SetVirtualMousePositionX, addr 0x181abdbd0, size 0x70, virtual false, abstract: false, final false
static inline void SetVirtualMousePositionX(float_t  f) ;

/// @brief Method SetVirtualMousePositionY, addr 0x181abdc40, size 0x70, virtual false, abstract: false, final false
static inline void SetVirtualMousePositionY(float_t  f) ;

/// @brief Method SetVirtualMousePositionZ, addr 0x181abdcb0, size 0x70, virtual false, abstract: false, final false
static inline void SetVirtualMousePositionZ(float_t  f) ;

/// @brief Method SwitchActiveInputMethod, addr 0x181abdd20, size 0x80, virtual false, abstract: false, final false
static inline void SwitchActiveInputMethod(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_ActiveInputMethod  activeInputMethod) ;

/// @brief Method UnRegisterVirtualAxis, addr 0x181abdda0, size 0xa0, virtual false, abstract: false, final false
static inline void UnRegisterVirtualAxis(::StringW  name) ;

/// @brief Method UnRegisterVirtualButton, addr 0x181abde40, size 0x80, virtual false, abstract: false, final false
static inline void UnRegisterVirtualButton(::StringW  name) ;

/// @brief Method VirtualAxisReference, addr 0x181abdec0, size 0x90, virtual false, abstract: false, final false
static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* VirtualAxisReference(::StringW  name) ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* getStaticF_activeInput() ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* getStaticF_s_HardwareInput() ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* getStaticF_s_TouchInput() ;

/// @brief Method get_mousePosition, addr 0x181abe020, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_mousePosition() ;

static inline void setStaticF_activeInput(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  value) ;

static inline void setStaticF_s_HardwareInput(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  value) ;

static inline void setStaticF_s_TouchInput(::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrossPlatformInputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrossPlatformInputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossPlatformInputManager(CrossPlatformInputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossPlatformInputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossPlatformInputManager(CrossPlatformInputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20354};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager) == 0x10, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput
