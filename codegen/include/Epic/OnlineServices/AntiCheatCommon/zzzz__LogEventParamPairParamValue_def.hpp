#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPairParamValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEventParamPairParamValue)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonEventParamType;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct Quat;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct Vec3f;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventParamPairParamValue;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, "Epic.OnlineServices.AntiCheatCommon", "LogEventParamPairParamValue");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonEventParamType, Epic.OnlineServices.AntiCheatCommon.Quat, Epic.OnlineServices.AntiCheatCommon.Vec3f, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogEventParamPairParamValue
struct CORDL_TYPE LogEventParamPairParamValue {
public:
// Declarations
 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::Nullable_1<::System::IntPtr>  ClientHandle;

 __declspec(property(get=get_Float, put=set_Float)) ::System::Nullable_1<float_t>  Float;

 __declspec(property(get=get_Int32, put=set_Int32)) ::System::Nullable_1<int32_t>  Int32;

 __declspec(property(get=get_Int64, put=set_Int64)) ::System::Nullable_1<int64_t>  Int64;

 __declspec(property(get=get_ParamValueType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  ParamValueType;

 __declspec(property(get=get_Quat, put=set_Quat)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  Quat;

 __declspec(property(get=get_String, put=set_String)) ::Epic::OnlineServices::Utf8String*  String;

 __declspec(property(get=get_UInt32, put=set_UInt32)) ::System::Nullable_1<uint32_t>  UInt32;

 __declspec(property(get=get_UInt64, put=set_UInt64)) ::System::Nullable_1<uint64_t>  UInt64;

 __declspec(property(get=get_Vec3f, put=set_Vec3f)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  Vec3f;

/// @brief Method get_ClientHandle, addr 0x180524e90, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::IntPtr> get_ClientHandle() ;

/// @brief Method get_Float, addr 0x180524ee0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_Float() ;

/// @brief Method get_Int32, addr 0x180524f00, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_Int32() ;

/// @brief Method get_Int64, addr 0x180524f20, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_Int64() ;

/// @brief Method get_ParamValueType, addr 0x18051e7a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType get_ParamValueType() ;

/// @brief Method get_Quat, addr 0x180524f70, size 0x60, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> get_Quat() ;

/// @brief Method get_String, addr 0x180524fd0, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_String() ;

/// @brief Method get_UInt32, addr 0x180524ff0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<uint32_t> get_UInt32() ;

/// @brief Method get_UInt64, addr 0x180525010, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<uint64_t> get_UInt64() ;

/// @brief Method get_Vec3f, addr 0x180525060, size 0x50, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_Vec3f() ;

/// @brief Method op_Implicit, addr 0x1805250b0, size 0x50, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method op_Implicit, addr 0x180525200, size 0x60, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::StringW  value) ;

/// @brief Method op_Implicit, addr 0x180525260, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value) ;

/// @brief Method op_Implicit, addr 0x1805252a0, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method op_Implicit, addr 0x1805251c0, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<::System::IntPtr>  value) ;

/// @brief Method op_Implicit, addr 0x1805252e0, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method op_Implicit, addr 0x180525100, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method op_Implicit, addr 0x180525320, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<int64_t>  value) ;

/// @brief Method op_Implicit, addr 0x180525140, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method op_Implicit, addr 0x180525180, size 0x40, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method set_ClientHandle, addr 0x180525360, size 0x40, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::Nullable_1<::System::IntPtr>  value) ;

/// @brief Method set_Float, addr 0x1805253a0, size 0x20, virtual false, abstract: false, final false
inline void set_Float(::System::Nullable_1<float_t>  value) ;

/// @brief Method set_Int32, addr 0x1805253c0, size 0x20, virtual false, abstract: false, final false
inline void set_Int32(::System::Nullable_1<int32_t>  value) ;

/// @brief Method set_Int64, addr 0x1805253e0, size 0x40, virtual false, abstract: false, final false
inline void set_Int64(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_Quat, addr 0x180525420, size 0x50, virtual false, abstract: false, final false
inline void set_Quat(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value) ;

/// @brief Method set_String, addr 0x180525470, size 0x30, virtual false, abstract: false, final false
inline void set_String(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UInt32, addr 0x1805254a0, size 0x20, virtual false, abstract: false, final false
inline void set_UInt32(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method set_UInt64, addr 0x1805254c0, size 0x40, virtual false, abstract: false, final false
inline void set_UInt64(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method set_Vec3f, addr 0x180525500, size 0x170, virtual false, abstract: false, final false
inline void set_Vec3f(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEventParamPairParamValue() ;

// Ctor Parameters [CppParam { name: "m_ClientHandle", ty: "::System::Nullable_1<::System::IntPtr>", modifiers: "", def_value: None }, CppParam { name: "m_String", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "m_UInt32", ty: "::System::Nullable_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Int32", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_UInt64", ty: "::System::Nullable_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Int64", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Vec3f", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }, CppParam { name: "m_Quat", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: None }, CppParam { name: "m_Float", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_ParamValueType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: None }]
constexpr LogEventParamPairParamValue(::System::Nullable_1<::System::IntPtr>  m_ClientHandle, ::Epic::OnlineServices::Utf8String*  m_String, ::System::Nullable_1<uint32_t>  m_UInt32, ::System::Nullable_1<int32_t>  m_Int32, ::System::Nullable_1<uint64_t>  m_UInt64, ::System::Nullable_1<int64_t>  m_Int64, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  m_Vec3f, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  m_Quat, ::System::Nullable_1<float_t>  m_Float, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamValueType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field m_ClientHandle, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::System::IntPtr>  m_ClientHandle;

/// @brief Field m_String, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  m_String;

/// @brief Field m_UInt32, offset: 0x18, size: 0x8, def value: None
 ::System::Nullable_1<uint32_t>  m_UInt32;

/// @brief Field m_Int32, offset: 0x20, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  m_Int32;

/// @brief Field m_UInt64, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  m_UInt64;

/// @brief Field m_Int64, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  m_Int64;

/// @brief Field m_Vec3f, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  m_Vec3f;

/// @brief Field m_Quat, offset: 0x58, size: 0x14, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  m_Quat;

/// @brief Field m_Float, offset: 0x6c, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  m_Float;

/// @brief Field m_ParamValueType, offset: 0x74, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamValueType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_ClientHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_String) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_UInt32) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_Int32) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_UInt64) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_Int64) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_Vec3f) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_Quat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_Float) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue, m_ParamValueType) == 0x74, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue) == 0x78, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
