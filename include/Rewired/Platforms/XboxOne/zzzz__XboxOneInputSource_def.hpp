#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/XboxOneInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XboxOneInputSource)
namespace GlobalNamespace {
struct tHsESWDQOdxcIkhJvKlfiYcSCTyD;
}
namespace Rewired::Internal::Localization {
class ITryGetLocalizedName;
}
namespace Rewired::Internal::Localization {
class LocalizedString;
}
namespace Rewired::Internal {
class IInputManagerHardwareJoystickMapHandler;
}
namespace Rewired::Platforms::XboxOne {
class IXboxOneInputSource;
}
namespace Rewired::Platforms::XboxOne {
struct XboxOneGamepadMotorType;
}
namespace Rewired::Platforms::XboxOne {
struct XboxOneInputSource_BadConnectionReason;
}
namespace Rewired::Platforms::XboxOne {
class XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA;
}
namespace Rewired::Platforms::XboxOne {
struct XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA;
}
namespace Rewired {
class HardwareJoystickMap_InputManager;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace Rewired::Platforms::XboxOne {
struct XboxOneInputSource_BadConnectionReason;
}
namespace Rewired::Platforms::XboxOne {
class XboxOneInputSource;
}
namespace Rewired::Platforms::XboxOne {
class XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA;
}
namespace Rewired::Platforms::XboxOne {
struct XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason);
MARK_REF_T(::Rewired::Platforms::XboxOne::XboxOneInputSource*);
MARK_REF_T(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*);
MARK_VAL_T(::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason, "Rewired.Platforms.XboxOne", "XboxOneInputSource/BadConnectionReason");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneInputSource*, "Rewired.Platforms.XboxOne", "XboxOneInputSource");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*, "Rewired.Platforms.XboxOne", "XboxOneInputSource/JjGEkxkGQZGveHGlfiwICJmPWKbDA");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA, "Rewired.Platforms.XboxOne", "XboxOneInputSource/pjVDOFOccKXqjpFHTspGXcoQFbheA");
// Dependencies 
namespace Rewired::Platforms::XboxOne {
// Is value type: true
// CS Name: Rewired.Platforms.XboxOne.XboxOneInputSource/BadConnectionReason
struct CORDL_TYPE XboxOneInputSource_BadConnectionReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XboxOneInputSource_BadConnectionReason_Unwrapped
enum struct __XboxOneInputSource_BadConnectionReason_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_GamepadNotActive = static_cast<int32_t>(0x1),
__E_InvalidName = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XboxOneInputSource_BadConnectionReason_Unwrapped () const noexcept {
return static_cast<__XboxOneInputSource_BadConnectionReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XboxOneInputSource_BadConnectionReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XboxOneInputSource_BadConnectionReason(int32_t  value__) noexcept;

/// @brief Field GamepadNotActive value: I32(1)
static ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason const GamepadNotActive;

/// @brief Field InvalidName value: I32(2)
static ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason const InvalidName;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne
// Dependencies 
namespace Rewired::Platforms::XboxOne {
// Is value type: true
// CS Name: Rewired.Platforms.XboxOne.XboxOneInputSource/pjVDOFOccKXqjpFHTspGXcoQFbheA
struct CORDL_TYPE XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA {
public:
// Declarations
/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint32_t  _cordl_fixed_empty_name_whitespace, uint32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

// Ctor Parameters []
// @brief default ctor
constexpr XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA() ;

// Ctor Parameters [CppParam { name: "THnbeQFqYLaAowpqMjqsZQWWPISUA", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "DDPehzNpcdaqwpznUAOjzEpnPncC", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA(uint32_t  THnbeQFqYLaAowpqMjqsZQWWPISUA, uint32_t  DDPehzNpcdaqwpznUAOjzEpnPncC) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field THnbeQFqYLaAowpqMjqsZQWWPISUA, offset: 0x0, size: 0x4, def value: None
 uint32_t  THnbeQFqYLaAowpqMjqsZQWWPISUA;

/// @brief Field DDPehzNpcdaqwpznUAOjzEpnPncC, offset: 0x4, size: 0x4, def value: None
 uint32_t  DDPehzNpcdaqwpznUAOjzEpnPncC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA, THnbeQFqYLaAowpqMjqsZQWWPISUA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA, DDPehzNpcdaqwpznUAOjzEpnPncC) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA) == 0x8, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne
// Dependencies Rewired.Platforms.Custom.CustomInputSource::Joystick
namespace Rewired::Platforms::XboxOne {
// Is value type: false
// CS Name: Rewired.Platforms.XboxOne.XboxOneInputSource/JjGEkxkGQZGveHGlfiwICJmPWKbDA
class CORDL_TYPE XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA : public ::Rewired::Platforms::Custom::CustomInputSource_Joystick {
public:
// Declarations
 __declspec(property(get=PDGMwYLakRyZGxTnYJsLVlEOpZiL)) uint64_t  ALCFmVKNeUAezSVSjMrtFlHdKAjJB;

/// @brief Field GFmWflgfyXzLpezoCsQrZLfMEmMt, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_GFmWflgfyXzLpezoCsQrZLfMEmMt, put=__cordl_internal_set_GFmWflgfyXzLpezoCsQrZLfMEmMt)) uint64_t  GFmWflgfyXzLpezoCsQrZLfMEmMt;

/// @brief Field USWDbgrIHJjDFUiSYHaxxmjpuXpB, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_USWDbgrIHJjDFUiSYHaxxmjpuXpB, put=__cordl_internal_set_USWDbgrIHJjDFUiSYHaxxmjpuXpB)) ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  USWDbgrIHJjDFUiSYHaxxmjpuXpB;

/// @brief Field VFINqewOiZloCTSItCDzSYoibQzp, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_VFINqewOiZloCTSItCDzSYoibQzp, put=__cordl_internal_set_VFINqewOiZloCTSItCDzSYoibQzp)) ::Rewired::Internal::Localization::LocalizedString*  VFINqewOiZloCTSItCDzSYoibQzp;

/// @brief Field dUKmGpIiGuFfzwurZFEYJmmPsbdE, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dUKmGpIiGuFfzwurZFEYJmmPsbdE, put=__cordl_internal_set_dUKmGpIiGuFfzwurZFEYJmmPsbdE)) ::ArrayW<::StringW>  dUKmGpIiGuFfzwurZFEYJmmPsbdE;

/// @brief Field enrHtJtjERTliEMkyaiZEAciorFOA, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enrHtJtjERTliEMkyaiZEAciorFOA, put=__cordl_internal_set_enrHtJtjERTliEMkyaiZEAciorFOA)) ::Rewired::HardwareJoystickMap_InputManager*  enrHtJtjERTliEMkyaiZEAciorFOA;

/// @brief Field fsfrITgQXtSIMmvTHjjpQFGtoMpc, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_fsfrITgQXtSIMmvTHjjpQFGtoMpc, put=__cordl_internal_set_fsfrITgQXtSIMmvTHjjpQFGtoMpc)) int32_t  fsfrITgQXtSIMmvTHjjpQFGtoMpc;

/// @brief Convert operator to "::Rewired::Internal::IInputManagerHardwareJoystickMapHandler"
constexpr operator  ::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*() noexcept;

/// @brief Convert operator to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr operator  ::Rewired::Internal::Localization::ITryGetLocalizedName*() noexcept;

/// @brief Method EsCmrfcKaxHiIGISYEsRtrenKraNA, addr 0x1818807f0, size 0x640, virtual true, abstract: false, final false
inline void EsCmrfcKaxHiIGISYEsRtrenKraNA() ;

static inline ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA* New_ctor(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method PDGMwYLakRyZGxTnYJsLVlEOpZiL, addr 0x1802ec4d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t PDGMwYLakRyZGxTnYJsLVlEOpZiL() ;

/// @brief Method Rewired.Internal.IInputManagerHardwareJoystickMapHandler.InitializeHardwareJoystickMap, addr 0x180322790, size 0x20, virtual true, abstract: false, final true
inline void Rewired_Internal_IInputManagerHardwareJoystickMapHandler_InitializeHardwareJoystickMap(::Rewired::HardwareJoystickMap_InputManager*  hardwareMap) ;

/// @brief Method Rewired.Internal.Localization.ITryGetLocalizedName.TryGetLocalizedName, addr 0x181880e30, size 0x100, virtual true, abstract: false, final true
inline bool Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName(::by_ref<::StringW>  value) ;

constexpr uint64_t const& __cordl_internal_get_GFmWflgfyXzLpezoCsQrZLfMEmMt() const;

constexpr uint64_t& __cordl_internal_get_GFmWflgfyXzLpezoCsQrZLfMEmMt() ;

constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource* const& __cordl_internal_get_USWDbgrIHJjDFUiSYHaxxmjpuXpB() const;

constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource*& __cordl_internal_get_USWDbgrIHJjDFUiSYHaxxmjpuXpB() ;

constexpr ::Rewired::Internal::Localization::LocalizedString* const& __cordl_internal_get_VFINqewOiZloCTSItCDzSYoibQzp() const;

constexpr ::Rewired::Internal::Localization::LocalizedString*& __cordl_internal_get_VFINqewOiZloCTSItCDzSYoibQzp() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_dUKmGpIiGuFfzwurZFEYJmmPsbdE() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_dUKmGpIiGuFfzwurZFEYJmmPsbdE() ;

constexpr ::Rewired::HardwareJoystickMap_InputManager* const& __cordl_internal_get_enrHtJtjERTliEMkyaiZEAciorFOA() const;

constexpr ::Rewired::HardwareJoystickMap_InputManager*& __cordl_internal_get_enrHtJtjERTliEMkyaiZEAciorFOA() ;

constexpr int32_t const& __cordl_internal_get_fsfrITgQXtSIMmvTHjjpQFGtoMpc() const;

constexpr int32_t& __cordl_internal_get_fsfrITgQXtSIMmvTHjjpQFGtoMpc() ;

constexpr void __cordl_internal_set_GFmWflgfyXzLpezoCsQrZLfMEmMt(uint64_t  value) ;

constexpr void __cordl_internal_set_USWDbgrIHJjDFUiSYHaxxmjpuXpB(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  value) ;

constexpr void __cordl_internal_set_VFINqewOiZloCTSItCDzSYoibQzp(::Rewired::Internal::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_dUKmGpIiGuFfzwurZFEYJmmPsbdE(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_enrHtJtjERTliEMkyaiZEAciorFOA(::Rewired::HardwareJoystickMap_InputManager*  value) ;

constexpr void __cordl_internal_set_fsfrITgQXtSIMmvTHjjpQFGtoMpc(int32_t  value) ;

/// @brief Method .ctor, addr 0x181880f30, size 0x390, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method afzgZAHfQeDqhDSRFbDPRyYwKlqGB, addr 0x1818812c0, size 0x20, virtual false, abstract: false, final false
inline bool afzgZAHfQeDqhDSRFbDPRyYwKlqGB(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fcwIpkBapYBAZJAGSSdUoLSyXhwcA, addr 0x1818812e0, size 0xb0, virtual false, abstract: false, final false
inline void fcwIpkBapYBAZJAGSSdUoLSyXhwcA() ;

/// @brief Convert to "::Rewired::Internal::IInputManagerHardwareJoystickMapHandler"
constexpr ::Rewired::Internal::IInputManagerHardwareJoystickMapHandler* i___Rewired__Internal__IInputManagerHardwareJoystickMapHandler() noexcept;

/// @brief Convert to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr ::Rewired::Internal::Localization::ITryGetLocalizedName* i___Rewired__Internal__Localization__ITryGetLocalizedName() noexcept;

/// @brief Method wNDDByBYqdQjMpzZjwLVqwkTcMff, addr 0x181881390, size 0x1c0, virtual false, abstract: false, final false
inline void wNDDByBYqdQjMpzZjwLVqwkTcMff(uint64_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zAQAMIksVUmDDeCgauXtbgsyGZmgB, addr 0x181881550, size 0x130, virtual false, abstract: false, final false
inline void zAQAMIksVUmDDeCgauXtbgsyGZmgB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA(XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA(XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA const& ) = delete;

/// @brief Field DgIAQVhUCdOUkfefkRgbONNDnQQrA offset 0xffffffff size 0x4
static constexpr int32_t  DgIAQVhUCdOUkfefkRgbONNDnQQrA{static_cast<int32_t>(0xf)};

/// @brief Field IrrhNFWxGQrNoARDNduMHaiSlFGn offset 0xffffffff size 0x4
static constexpr int32_t  IrrhNFWxGQrNoARDNduMHaiSlFGn{static_cast<int32_t>(0xc)};

/// @brief Field JbikiQNAeAeOXEEzpkQwWeRptiLEA offset 0xffffffff size 0x4
static constexpr int32_t  JbikiQNAeAeOXEEzpkQwWeRptiLEA{static_cast<int32_t>(0x9)};

/// @brief Field KNtiREbvsJDTXaBrZntXOJjFVRzu offset 0xffffffff size 0x8
static constexpr ::ConstString  KNtiREbvsJDTXaBrZntXOJjFVRzu{u"Xbox One Controller"};

/// @brief Field KtYMGbyJwgVakKocebxwKZTVcWnh offset 0xffffffff size 0x4
static constexpr int32_t  KtYMGbyJwgVakKocebxwKZTVcWnh{static_cast<int32_t>(0x1)};

/// @brief Field PIfeLOthmzfHkBbhqhIxMByTtRvT offset 0xffffffff size 0x4
static constexpr int32_t  PIfeLOthmzfHkBbhqhIxMByTtRvT{static_cast<int32_t>(0x0)};

/// @brief Field RYBdHZRzPoEeMqnHVwBnCdUALsp offset 0xffffffff size 0x4
static constexpr int32_t  RYBdHZRzPoEeMqnHVwBnCdUALsp{static_cast<int32_t>(0x1)};

/// @brief Field SuQaCEJacchUYCEJUIreMNisPZGRA offset 0xffffffff size 0x4
static constexpr int32_t  SuQaCEJacchUYCEJUIreMNisPZGRA{static_cast<int32_t>(0x3)};

/// @brief Field UbjfYrbGqLJhbvVPFfmEiiIwTUmP offset 0xffffffff size 0x4
static constexpr int32_t  UbjfYrbGqLJhbvVPFfmEiiIwTUmP{static_cast<int32_t>(0xe)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2286};

/// @brief Field ccjvXLtAcChBFAQHRKFjYlDCJJRBb offset 0xffffffff size 0x4
static constexpr int32_t  ccjvXLtAcChBFAQHRKFjYlDCJJRBb{static_cast<int32_t>(0x6)};

/// @brief Field cfEWnWolgmZVunWrHdmSOVcFCKNb offset 0xffffffff size 0x4
static constexpr int32_t  cfEWnWolgmZVunWrHdmSOVcFCKNb{static_cast<int32_t>(0x0)};

/// @brief Field frYEpOoDQGFKNJFthzsCObERVKtRA offset 0xffffffff size 0x4
static constexpr int32_t  frYEpOoDQGFKNJFthzsCObERVKtRA{static_cast<int32_t>(0x8)};

/// @brief Field jFkXyQVyQxiIvHgytwBWzhhzpbQu offset 0xffffffff size 0x4
static constexpr int32_t  jFkXyQVyQxiIvHgytwBWzhhzpbQu{static_cast<int32_t>(0xd)};

/// @brief Field jvgctKfttGFNDWpSrOXvnVkyNuioA offset 0xffffffff size 0x4
static constexpr int32_t  jvgctKfttGFNDWpSrOXvnVkyNuioA{static_cast<int32_t>(0x6)};

/// @brief Field kSCQgzqBlFsPzqVYnkwjdOJsPCeD offset 0xffffffff size 0x4
static constexpr int32_t  kSCQgzqBlFsPzqVYnkwjdOJsPCeD{static_cast<int32_t>(0x3)};

/// @brief Field lagPHialeBcnIAQsdcJDYkmiQNnT offset 0xffffffff size 0x4
static constexpr int32_t  lagPHialeBcnIAQsdcJDYkmiQNnT{static_cast<int32_t>(0x7)};

/// @brief Field msYCWPAVFfUTykxmnmCoWUAYdFDv offset 0xffffffff size 0x4
static constexpr int32_t  msYCWPAVFfUTykxmnmCoWUAYdFDv{static_cast<int32_t>(0x4)};

/// @brief Field mvZvIHhKBcYYttCPCXRvVZmOGdCk offset 0xffffffff size 0x4
static constexpr int32_t  mvZvIHhKBcYYttCPCXRvVZmOGdCk{static_cast<int32_t>(0x4)};

/// @brief Field oPbyEbkNACmEgObHqyFWumLpGzaQ offset 0xffffffff size 0x4
static constexpr int32_t  oPbyEbkNACmEgObHqyFWumLpGzaQ{static_cast<int32_t>(0x8)};

/// @brief Field tcKgwDlYkpOAKEdcpCDUdeWWqMZN offset 0xffffffff size 0x8
static constexpr ::ConstString  tcKgwDlYkpOAKEdcpCDUdeWWqMZN{u"Controller"};

/// @brief Field wDlRzCXuaKlAKoINzacmjKbunXauA offset 0xffffffff size 0x4
static constexpr int32_t  wDlRzCXuaKlAKoINzacmjKbunXauA{static_cast<int32_t>(0x2)};

/// @brief Field wIGBBoAOMpLmOIpuizcpGfTbEycMB offset 0xffffffff size 0x4
static constexpr int32_t  wIGBBoAOMpLmOIpuizcpGfTbEycMB{static_cast<int32_t>(0xe)};

/// @brief Field yIPesrOkOrHFsDrYffUElGsHMrxUA offset 0xffffffff size 0x4
static constexpr int32_t  yIPesrOkOrHFsDrYffUElGsHMrxUA{static_cast<int32_t>(0x5)};

/// @brief Field yrFVlzuPrIGkNUvxJXJniENIGzMaA offset 0xffffffff size 0x4
static constexpr int32_t  yrFVlzuPrIGkNUvxJXJniENIGzMaA{static_cast<int32_t>(0x9)};

/// @brief Field USWDbgrIHJjDFUiSYHaxxmjpuXpB, offset: 0x90, size: 0x8, def value: None
 ::Rewired::Platforms::XboxOne::IXboxOneInputSource*  ___USWDbgrIHJjDFUiSYHaxxmjpuXpB;

/// @brief Field fsfrITgQXtSIMmvTHjjpQFGtoMpc, offset: 0x98, size: 0x4, def value: None
 int32_t  ___fsfrITgQXtSIMmvTHjjpQFGtoMpc;

/// @brief Field GFmWflgfyXzLpezoCsQrZLfMEmMt, offset: 0xa0, size: 0x8, def value: None
 uint64_t  ___GFmWflgfyXzLpezoCsQrZLfMEmMt;

/// @brief Field dUKmGpIiGuFfzwurZFEYJmmPsbdE, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___dUKmGpIiGuFfzwurZFEYJmmPsbdE;

/// @brief Field enrHtJtjERTliEMkyaiZEAciorFOA, offset: 0xb0, size: 0x8, def value: None
 ::Rewired::HardwareJoystickMap_InputManager*  ___enrHtJtjERTliEMkyaiZEAciorFOA;

/// @brief Field VFINqewOiZloCTSItCDzSYoibQzp, offset: 0xb8, size: 0x8, def value: None
 ::Rewired::Internal::Localization::LocalizedString*  ___VFINqewOiZloCTSItCDzSYoibQzp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA, ___USWDbgrIHJjDFUiSYHaxxmjpuXpB) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA, ___fsfrITgQXtSIMmvTHjjpQFGtoMpc) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA, ___GFmWflgfyXzLpezoCsQrZLfMEmMt) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA, ___dUKmGpIiGuFfzwurZFEYJmmPsbdE) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA, ___enrHtJtjERTliEMkyaiZEAciorFOA) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA, ___VFINqewOiZloCTSItCDzSYoibQzp) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA) == 0xc0, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne
// Dependencies Rewired.Platforms.Custom.CustomInputSource
namespace Rewired::Platforms::XboxOne {
// Is value type: false
// CS Name: Rewired.Platforms.XboxOne.XboxOneInputSource
class CORDL_TYPE XboxOneInputSource : public ::Rewired::Platforms::Custom::CustomInputSource {
public:
// Declarations
using BadConnectionReason = ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason;

using JjGEkxkGQZGveHGlfiwICJmPWKbDA = ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA;

using pjVDOFOccKXqjpFHTspGXcoQFbheA = ::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA;

/// @brief Field ZNcLNEUHnDWgchkJmEFgrDEFSFxx, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZNcLNEUHnDWgchkJmEFgrDEFSFxx, put=__cordl_internal_set_ZNcLNEUHnDWgchkJmEFgrDEFSFxx)) bool  ZNcLNEUHnDWgchkJmEFgrDEFSFxx;

 __declspec(property(get=get_isReady)) bool  isReady;

/// @brief Field lplTlcepJlYtkGKtOuyzujwWrbMV, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lplTlcepJlYtkGKtOuyzujwWrbMV, put=__cordl_internal_set_lplTlcepJlYtkGKtOuyzujwWrbMV)) ::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>*  lplTlcepJlYtkGKtOuyzujwWrbMV;

/// @brief Field vPAEAkAgMRjluXrWjXjPjtaQnULrA, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_vPAEAkAgMRjluXrWjXjPjtaQnULrA, put=__cordl_internal_set_vPAEAkAgMRjluXrWjXjPjtaQnULrA)) bool  vPAEAkAgMRjluXrWjXjPjtaQnULrA;

/// @brief Field yFKgnNBAGAaSveGPRLdHoCTIqeZyA, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_yFKgnNBAGAaSveGPRLdHoCTIqeZyA, put=__cordl_internal_set_yFKgnNBAGAaSveGPRLdHoCTIqeZyA)) bool  yFKgnNBAGAaSveGPRLdHoCTIqeZyA;

/// @brief Convert operator to "::Rewired::Platforms::XboxOne::IXboxOneInputSource"
constexpr operator  ::Rewired::Platforms::XboxOne::IXboxOneInputSource*() noexcept;

/// @brief Method Dispose, addr 0x181885020, size 0x50, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181885070, size 0x90, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EaBsKlHaVjsGhJzKDrAAFLPSBPiW, addr 0x181885100, size 0x20, virtual false, abstract: false, final false
inline void EaBsKlHaVjsGhJzKDrAAFLPSBPiW() ;

/// @brief Method Finalize, addr 0x181885120, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetXboxOneUserIdFromUnityJoystick, addr 0x1818851b0, size 0xc0, virtual true, abstract: false, final true
inline int32_t GetXboxOneUserIdFromUnityJoystick(int32_t  unityJoystickId) ;

static inline ::Rewired::Platforms::XboxOne::XboxOneInputSource* New_ctor() ;

/// @brief Method PulseVibrateMotor, addr 0x181885270, size 0x150, virtual true, abstract: false, final true
inline void PulseVibrateMotor(uint64_t  xboxOneJoystickId, ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  startLevel, float_t  endLevel, float_t  duration) ;

/// @brief Method SetXboxOneVibration, addr 0x1818853c0, size 0x110, virtual true, abstract: false, final true
inline bool SetXboxOneVibration(uint64_t  xboxOneJoystickId, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  vibration) ;

/// @brief Method Update, addr 0x1818854d0, size 0x270, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_ZNcLNEUHnDWgchkJmEFgrDEFSFxx() const;

constexpr bool& __cordl_internal_get_ZNcLNEUHnDWgchkJmEFgrDEFSFxx() ;

constexpr ::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>* const& __cordl_internal_get_lplTlcepJlYtkGKtOuyzujwWrbMV() const;

constexpr ::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>*& __cordl_internal_get_lplTlcepJlYtkGKtOuyzujwWrbMV() ;

constexpr bool const& __cordl_internal_get_vPAEAkAgMRjluXrWjXjPjtaQnULrA() const;

constexpr bool& __cordl_internal_get_vPAEAkAgMRjluXrWjXjPjtaQnULrA() ;

constexpr bool const& __cordl_internal_get_yFKgnNBAGAaSveGPRLdHoCTIqeZyA() const;

constexpr bool& __cordl_internal_get_yFKgnNBAGAaSveGPRLdHoCTIqeZyA() ;

constexpr void __cordl_internal_set_ZNcLNEUHnDWgchkJmEFgrDEFSFxx(bool  value) ;

constexpr void __cordl_internal_set_lplTlcepJlYtkGKtOuyzujwWrbMV(::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>*  value) ;

constexpr void __cordl_internal_set_vPAEAkAgMRjluXrWjXjPjtaQnULrA(bool  value) ;

constexpr void __cordl_internal_set_yFKgnNBAGAaSveGPRLdHoCTIqeZyA(bool  value) ;

/// @brief Method .ctor, addr 0x181885740, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method bNAXmHciqlcDaLtOWRvZPbJgyIzJ, addr 0x1818858c0, size 0x120, virtual false, abstract: false, final false
inline void bNAXmHciqlcDaLtOWRvZPbJgyIzJ(uint32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_isReady, addr 0x1803151e0, size 0x10, virtual true, abstract: false, final false
inline bool get_isReady() ;

/// @brief Convert to "::Rewired::Platforms::XboxOne::IXboxOneInputSource"
constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource* i___Rewired__Platforms__XboxOne__IXboxOneInputSource() noexcept;

/// @brief Method mCyBxJfArJGCWWXsCDmEjHofGxsqB, addr 0x1818859e0, size 0x170, virtual false, abstract: false, final false
inline void mCyBxJfArJGCWWXsCDmEjHofGxsqB() ;

/// @brief Method tbCxiETGUtfGJBCdEoODXgRaDmwW, addr 0x181885b50, size 0x1d0, virtual false, abstract: false, final false
inline bool tbCxiETGUtfGJBCdEoODXgRaDmwW(uint32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method ticvllmnqkXEdjNYnyTaViSNRcpS, addr 0x181885d20, size 0x150, virtual false, abstract: false, final false
inline void ticvllmnqkXEdjNYnyTaViSNRcpS(uint32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XboxOneInputSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XboxOneInputSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XboxOneInputSource(XboxOneInputSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XboxOneInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XboxOneInputSource(XboxOneInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2287};

/// @brief Field okHfFVtLznrxcvfJoiQmKIYWKURi offset 0xffffffff size 0x4
static constexpr int32_t  okHfFVtLznrxcvfJoiQmKIYWKURi{static_cast<int32_t>(0x8)};

/// @brief Field ZNcLNEUHnDWgchkJmEFgrDEFSFxx, offset: 0x51, size: 0x1, def value: None
 bool  ___ZNcLNEUHnDWgchkJmEFgrDEFSFxx;

/// @brief Field yFKgnNBAGAaSveGPRLdHoCTIqeZyA, offset: 0x52, size: 0x1, def value: None
 bool  ___yFKgnNBAGAaSveGPRLdHoCTIqeZyA;

/// @brief Field lplTlcepJlYtkGKtOuyzujwWrbMV, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>*  ___lplTlcepJlYtkGKtOuyzujwWrbMV;

/// @brief Field vPAEAkAgMRjluXrWjXjPjtaQnULrA, offset: 0x60, size: 0x1, def value: None
 bool  ___vPAEAkAgMRjluXrWjXjPjtaQnULrA;

/// @brief Size padding 0x70 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource, ___ZNcLNEUHnDWgchkJmEFgrDEFSFxx) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource, ___yFKgnNBAGAaSveGPRLdHoCTIqeZyA) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource, ___lplTlcepJlYtkGKtOuyzujwWrbMV) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneInputSource, ___vPAEAkAgMRjluXrWjXjPjtaQnULrA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneInputSource) == 0x70, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne
