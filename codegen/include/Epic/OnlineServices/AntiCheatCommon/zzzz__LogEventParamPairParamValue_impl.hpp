#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPairParamValue.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValue_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::IntPtr> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_ClientHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180524e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_ClientHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<::System::IntPtr>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_ClientHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180525360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::Nullable_1<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_String)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180524fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_String", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_String)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180525470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_String", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_UInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint32_t> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_UInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180524ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_UInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_UInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<uint32_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_UInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805254a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_UInt32", {}, {::i2c::type_of<::System::Nullable_1<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Int32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180524f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Int32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<int32_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Int32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805253c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Int32", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_UInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint64_t> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_UInt64)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180525010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_UInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_UInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<uint64_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_UInt64)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805254c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_UInt64", {}, {::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_Int64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Int64)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180524f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Int64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_Int64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<int64_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Int64)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805253e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Int64", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_Vec3f
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Vec3f)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180525060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Vec3f", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_Vec3f
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Vec3f)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180525500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Vec3f", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_Quat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Quat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180524f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Quat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_Quat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Quat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180525420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Quat", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_Float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Float)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180524ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Float", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.set_Float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)(::System::Nullable_1<float_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Float)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805253a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Float", {}, {::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.get_ParamValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_ParamValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_ParamValueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<::System::IntPtr>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805251c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805250b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::StringW)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180525200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<uint32_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180525140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<int32_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180525100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<uint64_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180525180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<int64_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180525320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805252a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180525260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue.op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (*)(::System::Nullable_1<float_t>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805252e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::System::IntPtr> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_ClientHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_ClientHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::IntPtr>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_ClientHandle(::System::Nullable_1<::System::IntPtr>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::Nullable_1<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_String()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_String", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_String(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_String", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<uint32_t> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_UInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_UInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint32_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_UInt32(::System::Nullable_1<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_UInt32", {}, {::i2c::type_of<::System::Nullable_1<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Int32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Int32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Int32(::System::Nullable_1<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Int32", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<uint64_t> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_UInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_UInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_UInt64(::System::Nullable_1<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_UInt64", {}, {::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Int64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Int64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Int64(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Int64", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Vec3f()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Vec3f", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Vec3f(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Vec3f", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Quat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Quat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Quat(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Quat", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_Float()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_Float", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::set_Float(::System::Nullable_1<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"set_Float", {}, {::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::get_ParamValueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"get_ParamValueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType>(*this, ___internal_method);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<::System::IntPtr>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::op_Implicit___Epic__OnlineServices__AntiCheatCommon__LogEventParamPairParamValue(::System::Nullable_1<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ClientHandle", ty: "::System::Nullable_1<::System::IntPtr>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_String", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UInt32", ty: "::System::Nullable_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Int32", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UInt64", ty: "::System::Nullable_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Int64", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Vec3f", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Quat", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Float", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParamValueType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::LogEventParamPairParamValue(::System::Nullable_1<::System::IntPtr>  m_ClientHandle, ::Epic::OnlineServices::Utf8String*  m_String, ::System::Nullable_1<uint32_t>  m_UInt32, ::System::Nullable_1<int32_t>  m_Int32, ::System::Nullable_1<uint64_t>  m_UInt64, ::System::Nullable_1<int64_t>  m_Int64, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  m_Vec3f, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  m_Quat, ::System::Nullable_1<float_t>  m_Float, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamValueType) noexcept  {
this->m_ClientHandle = m_ClientHandle;
this->m_String = m_String;
this->m_UInt32 = m_UInt32;
this->m_Int32 = m_Int32;
this->m_UInt64 = m_UInt64;
this->m_Int64 = m_Int64;
this->m_Vec3f = m_Vec3f;
this->m_Quat = m_Quat;
this->m_Float = m_Float;
this->m_ParamValueType = m_ParamValueType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue::LogEventParamPairParamValue()   {
}
