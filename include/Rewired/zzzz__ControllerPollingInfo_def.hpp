#pragma once
// IWYU pragma private; include "Rewired/ControllerPollingInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerPollingInfo)
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace Rewired {
struct Pole;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
struct ControllerPollingInfo;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerPollingInfo);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerPollingInfo, "Rewired", "ControllerPollingInfo");
// Dependencies Rewired.ControllerElementType, Rewired.ControllerType, Rewired.Pole, UnityEngine.KeyCode
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerPollingInfo
struct CORDL_TYPE ControllerPollingInfo {
public:
// Declarations
 __declspec(property(get=get_axisPole, put=cUqxNuevqcInSjKYxOklmaWptqyF)) ::Rewired::Pole  axisPole;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerId, put=kXLtHYEoCBpMyFHxCOVmHMYwMFIH)) int32_t  controllerId;

 __declspec(property(get=get_controllerName, put=wZxcNmjxAZwdOyvjyIDDnGZILJXR)) ::StringW  controllerName;

 __declspec(property(get=get_controllerType, put=eBqPfWDMqZKQPTAsodpZdmUiuToaA)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_elementIdentifier)) ::Rewired::ControllerElementIdentifier*  elementIdentifier;

 __declspec(property(get=get_elementIdentifierId, put=fPCrEurcKBJUWuGNhNttIIlxgadx)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementIdentifierName, put=RTtDoOGyCqqChLdgNOIlYAqCWmJDA)) ::StringW  elementIdentifierName;

 __declspec(property(get=get_elementIndex, put=AKXlKRFyXIaaJRngRjCrKrrkkIAHA)) int32_t  elementIndex;

 __declspec(property(get=get_elementType, put=uVfgBAxeNFCiQougOwXXXQKaSzKt)) ::Rewired::ControllerElementType  elementType;

 __declspec(property(get=get_keyboardKey, put=nWzqxjplYfQtlDRIJPdYBIKuaVSV)) ::UnityEngine::KeyCode  keyboardKey;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

 __declspec(property(get=get_playerId, put=GJLTfMMnvLeoyZyTVCKrtlUJbIZT)) int32_t  playerId;

 __declspec(property(get=get_success, put=xDfXqWqGxtXZaIGBmwwgjSnXZqUh)) bool  success;

/// @brief Method AKXlKRFyXIaaJRngRjCrKrrkkIAHA, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void AKXlKRFyXIaaJRngRjCrKrrkkIAHA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GJLTfMMnvLeoyZyTVCKrtlUJbIZT, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void GJLTfMMnvLeoyZyTVCKrtlUJbIZT(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LYMBWnpGBeqpFfQXlLinYEgfgudp, addr 0x18183e010, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ControllerPollingInfo LYMBWnpGBeqpFfQXlLinYEgfgudp() ;

/// @brief Method RTtDoOGyCqqChLdgNOIlYAqCWmJDA, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void RTtDoOGyCqqChLdgNOIlYAqCWmJDA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18183e130, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18183e0a0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, ::StringW  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method cUqxNuevqcInSjKYxOklmaWptqyF, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void cUqxNuevqcInSjKYxOklmaWptqyF(::Rewired::Pole  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method eBqPfWDMqZKQPTAsodpZdmUiuToaA, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void eBqPfWDMqZKQPTAsodpZdmUiuToaA(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fPCrEurcKBJUWuGNhNttIIlxgadx, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void fPCrEurcKBJUWuGNhNttIIlxgadx(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_axisPole, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_axisPole() ;

/// @brief Method get_controller, addr 0x18183e1f0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerId, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_controllerName() ;

/// @brief Method get_controllerType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_elementIdentifier, addr 0x18183e280, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* get_elementIdentifier() ;

/// @brief Method get_elementIdentifierId, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementIdentifierName, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_elementIdentifierName() ;

/// @brief Method get_elementIndex, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIndex() ;

/// @brief Method get_elementType, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType get_elementType() ;

/// @brief Method get_keyboardKey, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyboardKey() ;

/// @brief Method get_player, addr 0x18183e310, size 0x1f0, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

/// @brief Method get_playerId, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method get_success, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_success() ;

/// @brief Method kXLtHYEoCBpMyFHxCOVmHMYwMFIH, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void kXLtHYEoCBpMyFHxCOVmHMYwMFIH(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nWzqxjplYfQtlDRIJPdYBIKuaVSV, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void nWzqxjplYfQtlDRIJPdYBIKuaVSV(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method uVfgBAxeNFCiQougOwXXXQKaSzKt, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void uVfgBAxeNFCiQougOwXXXQKaSzKt(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method wZxcNmjxAZwdOyvjyIDDnGZILJXR, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void wZxcNmjxAZwdOyvjyIDDnGZILJXR(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method xDfXqWqGxtXZaIGBmwwgjSnXZqUh, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void xDfXqWqGxtXZaIGBmwwgjSnXZqUh(bool  _cordl_fixed_empty_name_whitespace) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerPollingInfo() ;

// Ctor Parameters [CppParam { name: "cfcetTaUVLrrLhlJkaQLUwoZJHePA", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IfADDqehIzoFBiZEQMICUGxkMQiVA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sSXYdCozNbUGNpBlkIiMgONRTLZn", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eIxpZsltrsufeqJcVirFOTztgdap", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "VAYfwruMCCewRILVIOAvernmNiXx", ty: "::Rewired::ControllerType", modifiers: "", def_value: None }, CppParam { name: "kPfuOcPlwccniEIUvXXyKZpYUNLNA", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: None }, CppParam { name: "edGleceOSmCllFawdedDtNodlmFJA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "toZIhvagJSHnREANWusWeamtHMHL", ty: "::Rewired::Pole", modifiers: "", def_value: None }, CppParam { name: "zUSmTedzbOodvARCEcVytvdZfMHN", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ZpvjRHYFVpUdCDJmdhWYFaSuzDed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lTKlsEqTqRWbGpXAZRDpiblWqzNe", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None }]
constexpr ControllerPollingInfo(bool  cfcetTaUVLrrLhlJkaQLUwoZJHePA, int32_t  IfADDqehIzoFBiZEQMICUGxkMQiVA, int32_t  sSXYdCozNbUGNpBlkIiMgONRTLZn, ::StringW  eIxpZsltrsufeqJcVirFOTztgdap, ::Rewired::ControllerType  VAYfwruMCCewRILVIOAvernmNiXx, ::Rewired::ControllerElementType  kPfuOcPlwccniEIUvXXyKZpYUNLNA, int32_t  edGleceOSmCllFawdedDtNodlmFJA, ::Rewired::Pole  toZIhvagJSHnREANWusWeamtHMHL, ::StringW  zUSmTedzbOodvARCEcVytvdZfMHN, int32_t  ZpvjRHYFVpUdCDJmdhWYFaSuzDed, ::UnityEngine::KeyCode  lTKlsEqTqRWbGpXAZRDpiblWqzNe) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field cfcetTaUVLrrLhlJkaQLUwoZJHePA, offset: 0x0, size: 0x1, def value: None
 bool  cfcetTaUVLrrLhlJkaQLUwoZJHePA;

/// @brief Field IfADDqehIzoFBiZEQMICUGxkMQiVA, offset: 0x4, size: 0x4, def value: None
 int32_t  IfADDqehIzoFBiZEQMICUGxkMQiVA;

/// @brief Field sSXYdCozNbUGNpBlkIiMgONRTLZn, offset: 0x8, size: 0x4, def value: None
 int32_t  sSXYdCozNbUGNpBlkIiMgONRTLZn;

/// @brief Field eIxpZsltrsufeqJcVirFOTztgdap, offset: 0x10, size: 0x8, def value: None
 ::StringW  eIxpZsltrsufeqJcVirFOTztgdap;

/// @brief Field VAYfwruMCCewRILVIOAvernmNiXx, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ControllerType  VAYfwruMCCewRILVIOAvernmNiXx;

/// @brief Field kPfuOcPlwccniEIUvXXyKZpYUNLNA, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::ControllerElementType  kPfuOcPlwccniEIUvXXyKZpYUNLNA;

/// @brief Field edGleceOSmCllFawdedDtNodlmFJA, offset: 0x20, size: 0x4, def value: None
 int32_t  edGleceOSmCllFawdedDtNodlmFJA;

/// @brief Field toZIhvagJSHnREANWusWeamtHMHL, offset: 0x24, size: 0x4, def value: None
 ::Rewired::Pole  toZIhvagJSHnREANWusWeamtHMHL;

/// @brief Field zUSmTedzbOodvARCEcVytvdZfMHN, offset: 0x28, size: 0x8, def value: None
 ::StringW  zUSmTedzbOodvARCEcVytvdZfMHN;

/// @brief Field ZpvjRHYFVpUdCDJmdhWYFaSuzDed, offset: 0x30, size: 0x4, def value: None
 int32_t  ZpvjRHYFVpUdCDJmdhWYFaSuzDed;

/// @brief Field lTKlsEqTqRWbGpXAZRDpiblWqzNe, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::KeyCode  lTKlsEqTqRWbGpXAZRDpiblWqzNe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerPollingInfo, cfcetTaUVLrrLhlJkaQLUwoZJHePA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, IfADDqehIzoFBiZEQMICUGxkMQiVA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, sSXYdCozNbUGNpBlkIiMgONRTLZn) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, eIxpZsltrsufeqJcVirFOTztgdap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, VAYfwruMCCewRILVIOAvernmNiXx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, kPfuOcPlwccniEIUvXXyKZpYUNLNA) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, edGleceOSmCllFawdedDtNodlmFJA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, toZIhvagJSHnREANWusWeamtHMHL) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, zUSmTedzbOodvARCEcVytvdZfMHN) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, ZpvjRHYFVpUdCDJmdhWYFaSuzDed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerPollingInfo, lTKlsEqTqRWbGpXAZRDpiblWqzNe) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerPollingInfo) == 0x38, "Size mismatch!");

} // namespace end def Rewired
