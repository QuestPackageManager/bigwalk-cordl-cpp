#pragma once
// IWYU pragma private; include "Rewired/Mouse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerWithAxes_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Mouse)
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
namespace Rewired::Utils::Classes::Utility {
class TimerAbs;
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
namespace Rewired {
struct Pole;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
struct Guid;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class Mouse;
}
// Write type traits
MARK_REF_T(::Rewired::Mouse*);
DEFINE_IL2CPP_CLASS(::Rewired::Mouse*, "Rewired", "Mouse");
// Dependencies Rewired.ControllerWithAxes, System.Guid, UnityEngine.Vector2
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Mouse
class CORDL_TYPE Mouse : public ::Rewired::ControllerWithAxes {
public:
// Declarations
/// @brief Field BiHdxzYdywLLDPMIcOeStrQXLAKA, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_BiHdxzYdywLLDPMIcOeStrQXLAKA, put=__cordl_internal_set_BiHdxzYdywLLDPMIcOeStrQXLAKA)) int32_t  BiHdxzYdywLLDPMIcOeStrQXLAKA;

/// @brief Field UzyguZCCxTPEunLCIBoGCYFcdqFLA, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_UzyguZCCxTPEunLCIBoGCYFcdqFLA, put=__cordl_internal_set_UzyguZCCxTPEunLCIBoGCYFcdqFLA)) ::Rewired::Utils::Classes::Utility::TimerAbs*  UzyguZCCxTPEunLCIBoGCYFcdqFLA;

/// @brief Field WAOZvOeKIYHZvArvSgvHutknPKrh, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WAOZvOeKIYHZvArvSgvHutknPKrh, put=__cordl_internal_set_WAOZvOeKIYHZvArvSgvHutknPKrh)) ::Rewired::Interfaces::IUnifiedMouseSource*  WAOZvOeKIYHZvArvSgvHutknPKrh;

 __declspec(property(get=get_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

/// @brief Field pZHZOUWbXXgxTTQCoxYqRVnEpZUd, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_pZHZOUWbXXgxTTQCoxYqRVnEpZUd, put=__cordl_internal_set_pZHZOUWbXXgxTTQCoxYqRVnEpZUd)) ::UnityEngine::Vector2  pZHZOUWbXXgxTTQCoxYqRVnEpZUd;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_screenPositionDelta)) ::UnityEngine::Vector2  screenPositionDelta;

 __declspec(property(get=get_screenPositionPrev)) ::UnityEngine::Vector2  screenPositionPrev;

/// @brief Field tQnlsVbflpgfmTMLrGWCpGZCwPPR, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tQnlsVbflpgfmTMLrGWCpGZCwPPR, put=__cordl_internal_set_tQnlsVbflpgfmTMLrGWCpGZCwPPR)) ::UnityEngine::Vector2  tQnlsVbflpgfmTMLrGWCpGZCwPPR;

/// @brief Field toiRGxZVlrHEZfYkBVkLEKdWGxEZ, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_toiRGxZVlrHEZfYkBVkLEKdWGxEZ, put=__cordl_internal_set_toiRGxZVlrHEZfYkBVkLEKdWGxEZ)) ::ArrayW<float_t>  toiRGxZVlrHEZfYkBVkLEKdWGxEZ;

/// @brief Field xGTQYAzirxuJSrcuKmNyJyMiEjxQ, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_xGTQYAzirxuJSrcuKmNyJyMiEjxQ, put=setStaticF_xGTQYAzirxuJSrcuKmNyJyMiEjxQ)) ::System::Guid  xGTQYAzirxuJSrcuKmNyJyMiEjxQ;

/// @brief Method IsPolledAxisActive, addr 0x1819225f0, size 0x2e0, virtual true, abstract: false, final false
inline bool IsPolledAxisActive(int32_t  index, ::by_ref<::Rewired::Pole>  pole, ::by_ref<int32_t>  elementIdentifierId) ;

/// @brief Method KAgjArDrUkuylcKsMBGAlEcEXGGY, addr 0x1819228d0, size 0x40, virtual true, abstract: false, final false
inline void KAgjArDrUkuylcKsMBGAlEcEXGGY() ;

static inline ::Rewired::Mouse* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Mouse* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_8) ;

constexpr int32_t const& __cordl_internal_get_BiHdxzYdywLLDPMIcOeStrQXLAKA() const;

constexpr int32_t& __cordl_internal_get_BiHdxzYdywLLDPMIcOeStrQXLAKA() ;

constexpr ::Rewired::Utils::Classes::Utility::TimerAbs* const& __cordl_internal_get_UzyguZCCxTPEunLCIBoGCYFcdqFLA() const;

constexpr ::Rewired::Utils::Classes::Utility::TimerAbs*& __cordl_internal_get_UzyguZCCxTPEunLCIBoGCYFcdqFLA() ;

constexpr ::Rewired::Interfaces::IUnifiedMouseSource* const& __cordl_internal_get_WAOZvOeKIYHZvArvSgvHutknPKrh() const;

constexpr ::Rewired::Interfaces::IUnifiedMouseSource*& __cordl_internal_get_WAOZvOeKIYHZvArvSgvHutknPKrh() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pZHZOUWbXXgxTTQCoxYqRVnEpZUd() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pZHZOUWbXXgxTTQCoxYqRVnEpZUd() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_tQnlsVbflpgfmTMLrGWCpGZCwPPR() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_tQnlsVbflpgfmTMLrGWCpGZCwPPR() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_toiRGxZVlrHEZfYkBVkLEKdWGxEZ() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_toiRGxZVlrHEZfYkBVkLEKdWGxEZ() ;

constexpr void __cordl_internal_set_BiHdxzYdywLLDPMIcOeStrQXLAKA(int32_t  value) ;

constexpr void __cordl_internal_set_UzyguZCCxTPEunLCIBoGCYFcdqFLA(::Rewired::Utils::Classes::Utility::TimerAbs*  value) ;

constexpr void __cordl_internal_set_WAOZvOeKIYHZvArvSgvHutknPKrh(::Rewired::Interfaces::IUnifiedMouseSource*  value) ;

constexpr void __cordl_internal_set_pZHZOUWbXXgxTTQCoxYqRVnEpZUd(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_tQnlsVbflpgfmTMLrGWCpGZCwPPR(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_toiRGxZVlrHEZfYkBVkLEKdWGxEZ(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x181922a00, size 0x270, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181922910, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method efPLrMBIfJVNRoBBndZLcNUWramHA, addr 0x181922c70, size 0x140, virtual true, abstract: false, final false
inline bool efPLrMBIfJVNRoBBndZLcNUWramHA(bool  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Guid getStaticF_xGTQYAzirxuJSrcuKmNyJyMiEjxQ() ;

/// @brief Method get_deviceInstanceGuid, addr 0x181922db0, size 0x80, virtual true, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_screenPosition, addr 0x181922f30, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_screenPositionDelta, addr 0x181922e30, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPositionDelta() ;

/// @brief Method get_screenPositionPrev, addr 0x181922ec0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPositionPrev() ;

/// @brief Method qbvHjrzCagCJCDSxybFIUbLgeJaEA, addr 0x181922fa0, size 0x120, virtual false, abstract: false, final false
inline void qbvHjrzCagCJCDSxybFIUbLgeJaEA() ;

static inline void setStaticF_xGTQYAzirxuJSrcuKmNyJyMiEjxQ(::System::Guid  value) ;

/// @brief Method xOOQbXkNcmBVaQpYIKFgkKbAfKU, addr 0x1819230c0, size 0x60, virtual true, abstract: false, final false
inline void xOOQbXkNcmBVaQpYIKFgkKbAfKU(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Mouse(Mouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mouse(Mouse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1847};

/// @brief Field UzyguZCCxTPEunLCIBoGCYFcdqFLA, offset: 0x188, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::TimerAbs*  ___UzyguZCCxTPEunLCIBoGCYFcdqFLA;

/// @brief Field toiRGxZVlrHEZfYkBVkLEKdWGxEZ, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<float_t>  ___toiRGxZVlrHEZfYkBVkLEKdWGxEZ;

/// @brief Field pZHZOUWbXXgxTTQCoxYqRVnEpZUd, offset: 0x198, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pZHZOUWbXXgxTTQCoxYqRVnEpZUd;

/// @brief Field tQnlsVbflpgfmTMLrGWCpGZCwPPR, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___tQnlsVbflpgfmTMLrGWCpGZCwPPR;

/// @brief Field BiHdxzYdywLLDPMIcOeStrQXLAKA, offset: 0x1a8, size: 0x4, def value: None
 int32_t  ___BiHdxzYdywLLDPMIcOeStrQXLAKA;

/// @brief Field WAOZvOeKIYHZvArvSgvHutknPKrh, offset: 0x1b0, size: 0x8, def value: None
 ::Rewired::Interfaces::IUnifiedMouseSource*  ___WAOZvOeKIYHZvArvSgvHutknPKrh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Mouse, ___UzyguZCCxTPEunLCIBoGCYFcdqFLA) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Rewired::Mouse, ___toiRGxZVlrHEZfYkBVkLEKdWGxEZ) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Rewired::Mouse, ___pZHZOUWbXXgxTTQCoxYqRVnEpZUd) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Rewired::Mouse, ___tQnlsVbflpgfmTMLrGWCpGZCwPPR) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Mouse, ___BiHdxzYdywLLDPMIcOeStrQXLAKA) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Mouse, ___WAOZvOeKIYHZvArvSgvHutknPKrh) == 0x1b0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Mouse) == 0x1b8, "Size mismatch!");

} // namespace end def Rewired
