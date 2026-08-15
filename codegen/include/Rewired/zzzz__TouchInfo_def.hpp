#pragma once
// IWYU pragma private; include "Rewired/TouchInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchInfo)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
struct TouchInfo;
}
// Write type traits
MARK_VAL_T(::Rewired::TouchInfo);
DEFINE_IL2CPP_CLASS(::Rewired::TouchInfo, "Rewired", "TouchInfo");
// Dependencies UnityEngine.Vector2
namespace Rewired {
// Is value type: true
// CS Name: Rewired.TouchInfo
struct CORDL_TYPE TouchInfo {
public:
// Declarations
 __declspec(property(get=get_deltaPos, put=set_deltaPos)) ::UnityEngine::Vector2  deltaPos;

 __declspec(property(get=get_deltaPosRaw, put=set_deltaPosRaw)) ::UnityEngine::Vector2  deltaPosRaw;

 __declspec(property(get=get_deltaTime, put=set_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_isValid, put=set_isValid)) bool  isValid;

 __declspec(property(get=get_tapCount, put=set_tapCount)) int32_t  tapCount;

 __declspec(property(get=get_touchId, put=set_touchId)) int32_t  touchId;

 __declspec(property(get=get_touchPos, put=set_touchPos)) ::UnityEngine::Vector2  touchPos;

 __declspec(property(get=get_touchPosRaw, put=set_touchPosRaw)) ::UnityEngine::Vector2  touchPosRaw;

/// @brief Method .ctor, addr 0x1818479b0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_2, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_4, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_5, float_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method get_Invalid, addr 0x181847a30, size 0xc0, virtual false, abstract: false, final false
static inline ::Rewired::TouchInfo get_Invalid() ;

/// @brief Method get_deltaPos, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_deltaPos() ;

/// @brief Method get_deltaPosRaw, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_deltaPosRaw() ;

/// @brief Method get_deltaTime, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_deltaTime() ;

/// @brief Method get_isValid, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_tapCount, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_tapCount() ;

/// @brief Method get_touchId, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_touchId() ;

/// @brief Method get_touchPos, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_touchPos() ;

/// @brief Method get_touchPosRaw, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_touchPosRaw() ;

/// @brief Method set_deltaPos, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_deltaPos(::UnityEngine::Vector2  value) ;

/// @brief Method set_deltaPosRaw, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_deltaPosRaw(::UnityEngine::Vector2  value) ;

/// @brief Method set_deltaTime, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_deltaTime(float_t  value) ;

/// @brief Method set_isValid, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_isValid(bool  value) ;

/// @brief Method set_tapCount, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_tapCount(int32_t  value) ;

/// @brief Method set_touchId, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_touchId(int32_t  value) ;

/// @brief Method set_touchPos, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_touchPos(::UnityEngine::Vector2  value) ;

/// @brief Method set_touchPosRaw, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_touchPosRaw(::UnityEngine::Vector2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TouchInfo() ;

// Ctor Parameters [CppParam { name: "NtAgZVDmksYzcgaEanQSQcTmKUlO", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "XzfIfPQGeDaLVgrWEnEalQufnCgKA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "XCtyEFoGkzASirJmqainPvNBPvOy", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "jzrmZZclXeOvikPQddQgOUCjvVav", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "WzfBwKrxOamRWJFaxEZtOaFRRdpj", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bJBgFKIFyoDHWGCCKVnrTfHCpRCib", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "mIwHDCEghjcYFUDgeSHwLqWvQBsV", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vPNIQopRMMhyExVZZFOGgNVTUjTM", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchInfo(bool  NtAgZVDmksYzcgaEanQSQcTmKUlO, int32_t  XzfIfPQGeDaLVgrWEnEalQufnCgKA, ::UnityEngine::Vector2  XCtyEFoGkzASirJmqainPvNBPvOy, ::UnityEngine::Vector2  jzrmZZclXeOvikPQddQgOUCjvVav, ::UnityEngine::Vector2  WzfBwKrxOamRWJFaxEZtOaFRRdpj, ::UnityEngine::Vector2  bJBgFKIFyoDHWGCCKVnrTfHCpRCib, float_t  mIwHDCEghjcYFUDgeSHwLqWvQBsV, int32_t  vPNIQopRMMhyExVZZFOGgNVTUjTM) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field NtAgZVDmksYzcgaEanQSQcTmKUlO, offset: 0x0, size: 0x1, def value: None
 bool  NtAgZVDmksYzcgaEanQSQcTmKUlO;

/// @brief Field XzfIfPQGeDaLVgrWEnEalQufnCgKA, offset: 0x4, size: 0x4, def value: None
 int32_t  XzfIfPQGeDaLVgrWEnEalQufnCgKA;

/// @brief Field XCtyEFoGkzASirJmqainPvNBPvOy, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  XCtyEFoGkzASirJmqainPvNBPvOy;

/// @brief Field jzrmZZclXeOvikPQddQgOUCjvVav, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  jzrmZZclXeOvikPQddQgOUCjvVav;

/// @brief Field WzfBwKrxOamRWJFaxEZtOaFRRdpj, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  WzfBwKrxOamRWJFaxEZtOaFRRdpj;

/// @brief Field bJBgFKIFyoDHWGCCKVnrTfHCpRCib, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  bJBgFKIFyoDHWGCCKVnrTfHCpRCib;

/// @brief Field mIwHDCEghjcYFUDgeSHwLqWvQBsV, offset: 0x28, size: 0x4, def value: None
 float_t  mIwHDCEghjcYFUDgeSHwLqWvQBsV;

/// @brief Field vPNIQopRMMhyExVZZFOGgNVTUjTM, offset: 0x2c, size: 0x4, def value: None
 int32_t  vPNIQopRMMhyExVZZFOGgNVTUjTM;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::TouchInfo, NtAgZVDmksYzcgaEanQSQcTmKUlO) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, XzfIfPQGeDaLVgrWEnEalQufnCgKA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, XCtyEFoGkzASirJmqainPvNBPvOy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, jzrmZZclXeOvikPQddQgOUCjvVav) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, WzfBwKrxOamRWJFaxEZtOaFRRdpj) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, bJBgFKIFyoDHWGCCKVnrTfHCpRCib) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, mIwHDCEghjcYFUDgeSHwLqWvQBsV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::TouchInfo, vPNIQopRMMhyExVZZFOGgNVTUjTM) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::TouchInfo) == 0x30, "Size mismatch!");

} // namespace end def Rewired
