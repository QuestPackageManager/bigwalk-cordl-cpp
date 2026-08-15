#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/CustomController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementSelector_def.hpp"
#include "Rewired/ComponentControls/zzzz__ComponentController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomController)
namespace Rewired::ComponentControls::Data {
struct CustomControllerElementSelector_ElementType;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementSelector;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSet;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTarget;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerSelector;
}
namespace Rewired::ComponentControls {
class CustomController_CreateCustomControllerSettings;
}
namespace Rewired::ComponentControls {
struct CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA;
}
namespace Rewired {
class CustomController;
}
namespace Rewired {
class InputManager_Base;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Rewired::ComponentControls {
class CustomController;
}
namespace Rewired::ComponentControls {
class CustomController_CreateCustomControllerSettings;
}
namespace Rewired::ComponentControls {
struct CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::CustomController*);
MARK_REF_T(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*);
MARK_VAL_T(::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::CustomController*, "Rewired.ComponentControls", "CustomController");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*, "Rewired.ComponentControls", "CustomController/CreateCustomControllerSettings");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA, "Rewired.ComponentControls", "CustomController/RkTUiHSVhTNpXplpDUnEkBtuysoA");
// Dependencies System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.CustomController/CreateCustomControllerSettings
class CORDL_TYPE CustomController_CreateCustomControllerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field _assignToPlayerId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__assignToPlayerId, put=__cordl_internal_set__assignToPlayerId)) int32_t  _assignToPlayerId;

/// @brief Field _createCustomController, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__createCustomController, put=__cordl_internal_set__createCustomController)) bool  _createCustomController;

/// @brief Field _customControllerSourceId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__customControllerSourceId, put=__cordl_internal_set__customControllerSourceId)) int32_t  _customControllerSourceId;

/// @brief Field _destroyCustomController, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__destroyCustomController, put=__cordl_internal_set__destroyCustomController)) bool  _destroyCustomController;

 __declspec(property(get=get_assignToPlayerId, put=set_assignToPlayerId)) int32_t  assignToPlayerId;

 __declspec(property(get=get_createCustomController, put=set_createCustomController)) bool  createCustomController;

 __declspec(property(get=get_customControllerSourceId, put=set_customControllerSourceId)) int32_t  customControllerSourceId;

 __declspec(property(get=get_destroyCustomController, put=set_destroyCustomController)) bool  destroyCustomController;

static inline ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__assignToPlayerId() const;

constexpr int32_t& __cordl_internal_get__assignToPlayerId() ;

constexpr bool const& __cordl_internal_get__createCustomController() const;

constexpr bool& __cordl_internal_get__createCustomController() ;

constexpr int32_t const& __cordl_internal_get__customControllerSourceId() const;

constexpr int32_t& __cordl_internal_get__customControllerSourceId() ;

constexpr bool const& __cordl_internal_get__destroyCustomController() const;

constexpr bool& __cordl_internal_get__destroyCustomController() ;

constexpr void __cordl_internal_set__assignToPlayerId(int32_t  value) ;

constexpr void __cordl_internal_set__createCustomController(bool  value) ;

constexpr void __cordl_internal_set__customControllerSourceId(int32_t  value) ;

constexpr void __cordl_internal_set__destroyCustomController(bool  value) ;

/// @brief Method .ctor, addr 0x1818d6f10, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_assignToPlayerId, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_assignToPlayerId() ;

/// @brief Method get_createCustomController, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_createCustomController() ;

/// @brief Method get_customControllerSourceId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_customControllerSourceId() ;

/// @brief Method get_destroyCustomController, addr 0x1804bdaf0, size 0x10, virtual false, abstract: false, final false
inline bool get_destroyCustomController() ;

/// @brief Method set_assignToPlayerId, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_assignToPlayerId(int32_t  value) ;

/// @brief Method set_createCustomController, addr 0x1818d6f20, size 0x10, virtual false, abstract: false, final false
inline void set_createCustomController(bool  value) ;

/// @brief Method set_customControllerSourceId, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_customControllerSourceId(int32_t  value) ;

/// @brief Method set_destroyCustomController, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_destroyCustomController(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomController_CreateCustomControllerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomController_CreateCustomControllerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomController_CreateCustomControllerSettings(CustomController_CreateCustomControllerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomController_CreateCustomControllerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomController_CreateCustomControllerSettings(CustomController_CreateCustomControllerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2738};

/// @brief Field _createCustomController, offset: 0x10, size: 0x1, def value: None
 bool  ____createCustomController;

/// @brief Field _customControllerSourceId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____customControllerSourceId;

/// @brief Field _assignToPlayerId, offset: 0x18, size: 0x4, def value: None
 int32_t  ____assignToPlayerId;

/// @brief Field _destroyCustomController, offset: 0x1c, size: 0x1, def value: None
 bool  ____destroyCustomController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings, ____createCustomController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings, ____customControllerSourceId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings, ____assignToPlayerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings, ____destroyCustomController) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings) == 0x20, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.Data.CustomControllerElementSelector::ElementType
namespace Rewired::ComponentControls {
// Is value type: true
// CS Name: Rewired.ComponentControls.CustomController/RkTUiHSVhTNpXplpDUnEkBtuysoA
struct CORDL_TYPE CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA {
public:
// Declarations
/// @brief Method QsDslzCwdynsGBRURkLmjPBtiEmq, addr 0x1818dee20, size 0x50, virtual false, abstract: false, final false
inline void QsDslzCwdynsGBRURkLmjPBtiEmq(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818dee70, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x180fb4c80, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method hMuelXwGHFyFZvRMMduSTAtzkaaT, addr 0x1818deeb0, size 0x20, virtual false, abstract: false, final false
inline bool hMuelXwGHFyFZvRMMduSTAtzkaaT(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method hpySEAhrxGNOiILzHHnBBMELorPn, addr 0x1818deed0, size 0x20, virtual false, abstract: false, final false
inline void hpySEAhrxGNOiILzHHnBBMELorPn(bool  _cordl_fixed_empty_name_whitespace) ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA() ;

// Ctor Parameters [CppParam { name: "RAeUiXnDiAQQwsFTthsNoqoUcqlh", ty: "::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType", modifiers: "", def_value: None }, CppParam { name: "NqjEjGwICwAewawMhNtZgaTgkrpLA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zHxzSIwdUTCRagQATxbHtZhNDHqyA", ty: "float_t", modifiers: "", def_value: None }]
constexpr CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA(::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  RAeUiXnDiAQQwsFTthsNoqoUcqlh, int32_t  NqjEjGwICwAewawMhNtZgaTgkrpLA, float_t  zHxzSIwdUTCRagQATxbHtZhNDHqyA) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field RAeUiXnDiAQQwsFTthsNoqoUcqlh, offset: 0x0, size: 0x4, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType  RAeUiXnDiAQQwsFTthsNoqoUcqlh;

/// @brief Field NqjEjGwICwAewawMhNtZgaTgkrpLA, offset: 0x4, size: 0x4, def value: None
 int32_t  NqjEjGwICwAewawMhNtZgaTgkrpLA;

/// @brief Field zHxzSIwdUTCRagQATxbHtZhNDHqyA, offset: 0x8, size: 0x4, def value: None
 float_t  zHxzSIwdUTCRagQATxbHtZhNDHqyA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA, RAeUiXnDiAQQwsFTthsNoqoUcqlh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA, NqjEjGwICwAewawMhNtZgaTgkrpLA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA, zHxzSIwdUTCRagQATxbHtZhNDHqyA) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA) == 0xc, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies Rewired.ComponentControls.ComponentController
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.CustomController
class CORDL_TYPE CustomController : public ::Rewired::ComponentControls::ComponentController {
public:
// Declarations
using CreateCustomControllerSettings = ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings;

using RkTUiHSVhTNpXplpDUnEkBtuysoA = ::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA;

/// @brief Field _createCustomControllerSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__createCustomControllerSettings, put=__cordl_internal_set__createCustomControllerSettings)) ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*  _createCustomControllerSettings;

/// @brief Field _customControllerSelector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__customControllerSelector, put=__cordl_internal_set__customControllerSelector)) ::Rewired::ComponentControls::Data::CustomControllerSelector*  _customControllerSelector;

/// @brief Field _rewiredInputManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rewiredInputManager, put=__cordl_internal_set__rewiredInputManager)) ::UnityW<::Rewired::InputManager_Base>  _rewiredInputManager;

/// @brief Field aQhixuWcIFPXouTjKtfUMzZMnsoi, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_aQhixuWcIFPXouTjKtfUMzZMnsoi, put=__cordl_internal_set_aQhixuWcIFPXouTjKtfUMzZMnsoi)) ::System::Collections::Generic::List_1<::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA>*  aQhixuWcIFPXouTjKtfUMzZMnsoi;

 __declspec(property(get=get_createCustomControllerSettings)) ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*  createCustomControllerSettings;

 __declspec(property(get=get_customControllerSelector)) ::Rewired::ComponentControls::Data::CustomControllerSelector*  customControllerSelector;

/// @brief Field gFsnkmclHHcvWBKjPaSoSuhzpDQI, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_gFsnkmclHHcvWBKjPaSoSuhzpDQI, put=__cordl_internal_set_gFsnkmclHHcvWBKjPaSoSuhzpDQI)) int32_t  gFsnkmclHHcvWBKjPaSoSuhzpDQI;

/// @brief Field jDhRTQvywXLSvXskouJuSTJJvmtw, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_jDhRTQvywXLSvXskouJuSTJJvmtw, put=__cordl_internal_set_jDhRTQvywXLSvXskouJuSTJJvmtw)) ::System::Action*  jDhRTQvywXLSvXskouJuSTJJvmtw;

 __declspec(property(get=get_rewiredInputManager, put=set_rewiredInputManager)) ::UnityW<::Rewired::InputManager_Base>  rewiredInputManager;

/// @brief Method ClearControlValues, addr 0x1818d7820, size 0xd0, virtual true, abstract: false, final false
inline void ClearControlValues() ;

/// @brief Method ClearElementValue, addr 0x1818d7980, size 0x150, virtual false, abstract: false, final false
inline void ClearElementValue(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element) ;

/// @brief Method ClearElementValue, addr 0x1818d7ad0, size 0x150, virtual false, abstract: false, final false
inline void ClearElementValue(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  target) ;

/// @brief Method ClearElementValue, addr 0x1818d78f0, size 0x90, virtual false, abstract: false, final false
inline void ClearElementValue(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*  targetSet) ;

/// @brief Method ElementExists, addr 0x1818d7da0, size 0x50, virtual false, abstract: false, final false
inline bool ElementExists(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element) ;

/// @brief Method ElementExists_Editor, addr 0x1818d7c20, size 0x180, virtual false, abstract: false, final false
inline int32_t ElementExists_Editor(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element) ;

/// @brief Method ExxycXfjMLxtOQrxmtSuTvqxIQRp, addr 0x1818d7df0, size 0x260, virtual false, abstract: false, final false
inline ::Rewired::CustomController* ExxycXfjMLxtOQrxmtSuTvqxIQRp(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GetCustomController, addr 0x1818d8050, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::CustomController* GetCustomController() ;

/// @brief Method GetUseCustomController, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool GetUseCustomController() ;

static inline ::Rewired::ComponentControls::CustomController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1818d8060, size 0xf0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1818d8150, size 0x50, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818d6c40, size 0x90, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInitialize, addr 0x1818d81a0, size 0xd0, virtual true, abstract: false, final false
inline bool OnInitialize() ;

/// @brief Method OnSubscribeEvents, addr 0x1818d8270, size 0xc0, virtual true, abstract: false, final false
inline void OnSubscribeEvents() ;

/// @brief Method OnUnsubscribeEvents, addr 0x1818d8330, size 0x60, virtual true, abstract: false, final false
inline void OnUnsubscribeEvents() ;

/// @brief Method OnValidate, addr 0x1818d8390, size 0x30, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetAxisValue, addr 0x1818d83c0, size 0x1c0, virtual false, abstract: false, final false
inline void SetAxisValue(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element, float_t  value) ;

/// @brief Method SetButtonValue, addr 0x1818d8580, size 0x1c0, virtual false, abstract: false, final false
inline void SetButtonValue(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element, bool  value) ;

/// @brief Method SetUseCustomController, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SetUseCustomController(bool  value) ;

/// @brief Method SlHFIzNCfsAKOQlEMVVfCLKlccfiA, addr 0x1818d8390, size 0x30, virtual false, abstract: false, final false
inline void SlHFIzNCfsAKOQlEMVVfCLKlccfiA() ;

/// @brief Method ValidateElement, addr 0x1818d88c0, size 0x170, virtual false, abstract: false, final false
inline bool ValidateElement(::Rewired::ComponentControls::Data::CustomControllerElementSelector*  element) ;

/// @brief Method ValidateElement, addr 0x1818d8740, size 0x180, virtual false, abstract: false, final false
inline bool ValidateElement(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  target) ;

/// @brief Method ValidateElements, addr 0x1818d8a30, size 0xb0, virtual false, abstract: false, final false
inline bool ValidateElements(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*  targetSet) ;

constexpr ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings* const& __cordl_internal_get__createCustomControllerSettings() const;

constexpr ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*& __cordl_internal_get__createCustomControllerSettings() ;

constexpr ::Rewired::ComponentControls::Data::CustomControllerSelector* const& __cordl_internal_get__customControllerSelector() const;

constexpr ::Rewired::ComponentControls::Data::CustomControllerSelector*& __cordl_internal_get__customControllerSelector() ;

constexpr ::UnityW<::Rewired::InputManager_Base> const& __cordl_internal_get__rewiredInputManager() const;

constexpr ::UnityW<::Rewired::InputManager_Base>& __cordl_internal_get__rewiredInputManager() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA>* const& __cordl_internal_get_aQhixuWcIFPXouTjKtfUMzZMnsoi() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA>*& __cordl_internal_get_aQhixuWcIFPXouTjKtfUMzZMnsoi() ;

constexpr int32_t const& __cordl_internal_get_gFsnkmclHHcvWBKjPaSoSuhzpDQI() const;

constexpr int32_t& __cordl_internal_get_gFsnkmclHHcvWBKjPaSoSuhzpDQI() ;

constexpr ::System::Action* const& __cordl_internal_get_jDhRTQvywXLSvXskouJuSTJJvmtw() const;

constexpr ::System::Action*& __cordl_internal_get_jDhRTQvywXLSvXskouJuSTJJvmtw() ;

constexpr void __cordl_internal_set__createCustomControllerSettings(::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*  value) ;

constexpr void __cordl_internal_set__customControllerSelector(::Rewired::ComponentControls::Data::CustomControllerSelector*  value) ;

constexpr void __cordl_internal_set__rewiredInputManager(::UnityW<::Rewired::InputManager_Base>  value) ;

constexpr void __cordl_internal_set_aQhixuWcIFPXouTjKtfUMzZMnsoi(::System::Collections::Generic::List_1<::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA>*  value) ;

constexpr void __cordl_internal_set_gFsnkmclHHcvWBKjPaSoSuhzpDQI(int32_t  value) ;

constexpr void __cordl_internal_set_jDhRTQvywXLSvXskouJuSTJJvmtw(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1818d8ae0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_InputSourceUpdateEvent, addr 0x1818d8bd0, size 0x90, virtual false, abstract: false, final false
inline void add_InputSourceUpdateEvent(::System::Action*  value) ;

/// @brief Method get_createCustomControllerSettings, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings* get_createCustomControllerSettings() ;

/// @brief Method get_customControllerSelector, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::Data::CustomControllerSelector* get_customControllerSelector() ;

/// @brief Method get_rewiredInputManager, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::InputManager_Base> get_rewiredInputManager() ;

/// @brief Method hIKOWoMfAkzYQLSdLVaMNtgzYtRf, addr 0x1818d8c60, size 0x160, virtual false, abstract: false, final false
inline void hIKOWoMfAkzYQLSdLVaMNtgzYtRf() ;

/// @brief Method remove_InputSourceUpdateEvent, addr 0x1818d8dc0, size 0x90, virtual false, abstract: false, final false
inline void remove_InputSourceUpdateEvent(::System::Action*  value) ;

/// @brief Method scpLcoMgqoEbeaGnWonEOHwuPthC, addr 0x1818d8e50, size 0x90, virtual false, abstract: false, final false
inline bool scpLcoMgqoEbeaGnWonEOHwuPthC() ;

/// @brief Method set_rewiredInputManager, addr 0x1818d8ee0, size 0x60, virtual false, abstract: false, final false
inline void set_rewiredInputManager(::Rewired::InputManager_Base*  value) ;

/// @brief Method tCVADftAOJTcNsKzbBivEiwZQDEG, addr 0x1818d8f40, size 0xc0, virtual false, abstract: false, final false
inline void tCVADftAOJTcNsKzbBivEiwZQDEG() ;

/// @brief Method xonWvWJrcRDwooGsjZAbPXVIuEKH, addr 0x1818d9000, size 0x120, virtual false, abstract: false, final false
inline void xonWvWJrcRDwooGsjZAbPXVIuEKH(::Rewired::CustomController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method znDxqKvLrjCpRtHLGGUzEXJWyCSMA, addr 0x1818d9120, size 0x140, virtual false, abstract: false, final false
inline void znDxqKvLrjCpRtHLGGUzEXJWyCSMA() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2740};

/// @brief Field _rewiredInputManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Rewired::InputManager_Base>  ____rewiredInputManager;

/// @brief Field _customControllerSelector, offset: 0x38, size: 0x8, def value: None
 ::Rewired::ComponentControls::Data::CustomControllerSelector*  ____customControllerSelector;

/// @brief Field _createCustomControllerSettings, offset: 0x40, size: 0x8, def value: None
 ::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings*  ____createCustomControllerSettings;

/// @brief Field aQhixuWcIFPXouTjKtfUMzZMnsoi, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ComponentControls::CustomController_RkTUiHSVhTNpXplpDUnEkBtuysoA>*  ___aQhixuWcIFPXouTjKtfUMzZMnsoi;

/// @brief Field gFsnkmclHHcvWBKjPaSoSuhzpDQI, offset: 0x50, size: 0x4, def value: None
 int32_t  ___gFsnkmclHHcvWBKjPaSoSuhzpDQI;

/// @brief Field jDhRTQvywXLSvXskouJuSTJJvmtw, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___jDhRTQvywXLSvXskouJuSTJJvmtw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::CustomController, ____rewiredInputManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController, ____customControllerSelector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController, ____createCustomControllerSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController, ___aQhixuWcIFPXouTjKtfUMzZMnsoi) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController, ___gFsnkmclHHcvWBKjPaSoSuhzpDQI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::CustomController, ___jDhRTQvywXLSvXskouJuSTJJvmtw) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::CustomController) == 0x60, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
