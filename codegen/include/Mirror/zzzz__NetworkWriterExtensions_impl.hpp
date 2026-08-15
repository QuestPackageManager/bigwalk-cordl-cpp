#pragma once
// IWYU pragma private; include "Mirror/NetworkWriterExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkWriterExtensions_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkWriterExtensions_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
constexpr double_t& Mirror::NetworkWriterExtensions_UIntDouble::__cordl_internal_get_doubleValue()  {
return this->___doubleValue;
}
constexpr double_t const& Mirror::NetworkWriterExtensions_UIntDouble::__cordl_internal_get_doubleValue() const {
return this->___doubleValue;
}
constexpr void Mirror::NetworkWriterExtensions_UIntDouble::__cordl_internal_set_doubleValue(double_t  value)  {
this->___doubleValue = value;
}
constexpr uint64_t& Mirror::NetworkWriterExtensions_UIntDouble::__cordl_internal_get_longValue()  {
return this->___longValue;
}
constexpr uint64_t const& Mirror::NetworkWriterExtensions_UIntDouble::__cordl_internal_get_longValue() const {
return this->___longValue;
}
constexpr void Mirror::NetworkWriterExtensions_UIntDouble::__cordl_internal_set_longValue(uint64_t  value)  {
this->___longValue = value;
}
// Ctor Parameters [CppParam { name: "doubleValue", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "longValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkWriterExtensions_UIntDouble::NetworkWriterExtensions_UIntDouble(double_t  doubleValue, uint64_t  longValue) noexcept  {
this->doubleValue = doubleValue;
this->longValue = longValue;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkWriterExtensions_UIntDouble::NetworkWriterExtensions_UIntDouble()   {
}
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, uint8_t)>(&::Mirror::NetworkWriterExtensions::WriteByte)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181594140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteByte", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteByteNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<uint8_t>)>(&::Mirror::NetworkWriterExtensions::WriteByteNullable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181594d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteByteNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, int8_t)>(&::Mirror::NetworkWriterExtensions::WriteSByte)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181594140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteSByte", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteSByteNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<int8_t>)>(&::Mirror::NetworkWriterExtensions::WriteSByteNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815967a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteSByteNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, char16_t)>(&::Mirror::NetworkWriterExtensions::WriteChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181594f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteChar", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteCharNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<char16_t>)>(&::Mirror::NetworkWriterExtensions::WriteCharNullable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181594f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteCharNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkWriterExtensions::WriteBool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181594140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBool", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteBoolNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<bool>)>(&::Mirror::NetworkWriterExtensions::WriteBoolNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181594d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBoolNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, int16_t)>(&::Mirror::NetworkWriterExtensions::WriteShort)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181594f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteShort", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteShortNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<int16_t>)>(&::Mirror::NetworkWriterExtensions::WriteShortNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181596880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteShortNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, uint16_t)>(&::Mirror::NetworkWriterExtensions::WriteUShort)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181594f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUShort", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteUShortNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<uint16_t>)>(&::Mirror::NetworkWriterExtensions::WriteUShortNullable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181596f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUShortNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, int32_t)>(&::Mirror::NetworkWriterExtensions::WriteInt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181595bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteIntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<int32_t>)>(&::Mirror::NetworkWriterExtensions::WriteIntNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181595af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteIntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, uint32_t)>(&::Mirror::NetworkWriterExtensions::WriteUInt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181595bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteUIntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<uint32_t>)>(&::Mirror::NetworkWriterExtensions::WriteUIntNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181595af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUIntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, int64_t)>(&::Mirror::NetworkWriterExtensions::WriteLong)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181595d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteLong", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteLongNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<int64_t>)>(&::Mirror::NetworkWriterExtensions::WriteLongNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181595c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteLongNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, uint64_t)>(&::Mirror::NetworkWriterExtensions::WriteULong)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181595d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteULong", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteULongNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<uint64_t>)>(&::Mirror::NetworkWriterExtensions::WriteULongNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181595c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteULongNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, float_t)>(&::Mirror::NetworkWriterExtensions::WriteFloat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815956d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteFloat", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteFloatNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<float_t>)>(&::Mirror::NetworkWriterExtensions::WriteFloatNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815955f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteFloatNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, double_t)>(&::Mirror::NetworkWriterExtensions::WriteDouble)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181595580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDouble", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteDoubleNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<double_t>)>(&::Mirror::NetworkWriterExtensions::WriteDoubleNullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181595490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDoubleNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Decimal)>(&::Mirror::NetworkWriterExtensions::WriteDecimal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815951b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDecimal", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteDecimalNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::System::Decimal>)>(&::Mirror::NetworkWriterExtensions::WriteDecimalNullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815953a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDecimalNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::StringW)>(&::Mirror::NetworkWriterExtensions::WriteString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181596ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteString", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteBytesAndSizeSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::ArraySegment_1<uint8_t>)>(&::Mirror::NetworkWriterExtensions::WriteBytesAndSizeSegment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181594da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBytesAndSizeSegment", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteBytesAndSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::ArrayW<uint8_t>)>(&::Mirror::NetworkWriterExtensions::WriteBytesAndSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181594dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBytesAndSize", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteBytesAndSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::NetworkWriterExtensions::WriteBytesAndSize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181594e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBytesAndSize", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Vector2)>(&::Mirror::NetworkWriterExtensions::WriteVector2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181593f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector2Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Vector2>)>(&::Mirror::NetworkWriterExtensions::WriteVector2Nullable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815970f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Vector3)>(&::Mirror::NetworkWriterExtensions::WriteVector3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815972e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector3Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkWriterExtensions::WriteVector3Nullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815971f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Vector4)>(&::Mirror::NetworkWriterExtensions::WriteVector4)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815951b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector4", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector4Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Vector4>)>(&::Mirror::NetworkWriterExtensions::WriteVector4Nullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815950c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector4Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector2Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Vector2Int)>(&::Mirror::NetworkWriterExtensions::WriteVector2Int)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181597080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2Int", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector2IntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Vector2Int>)>(&::Mirror::NetworkWriterExtensions::WriteVector2IntNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181596fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2IntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector2Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector3Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Vector3Int)>(&::Mirror::NetworkWriterExtensions::WriteVector3Int)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815972e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3Int", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteVector3IntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Vector3Int>)>(&::Mirror::NetworkWriterExtensions::WriteVector3IntNullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815971f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3IntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Color)>(&::Mirror::NetworkWriterExtensions::WriteColor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815951b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColor", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteColorNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Color>)>(&::Mirror::NetworkWriterExtensions::WriteColorNullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815950c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColorNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteColor32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Color32)>(&::Mirror::NetworkWriterExtensions::WriteColor32)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181593fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColor32", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteColor32Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Color32>)>(&::Mirror::NetworkWriterExtensions::WriteColor32Nullable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181594ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColor32Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Color32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Quaternion)>(&::Mirror::NetworkWriterExtensions::WriteQuaternion)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815951b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteQuaternion", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteQuaternionNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Quaternion>)>(&::Mirror::NetworkWriterExtensions::WriteQuaternionNullable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815950c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteQuaternionNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Rect)>(&::Mirror::NetworkWriterExtensions::WriteRect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815966b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRect", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteRectNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Rect>)>(&::Mirror::NetworkWriterExtensions::WriteRectNullable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181596600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRectNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WritePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Plane)>(&::Mirror::NetworkWriterExtensions::WritePlane)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181596310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WritePlane", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WritePlaneNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Plane>)>(&::Mirror::NetworkWriterExtensions::WritePlaneNullable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815961d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WritePlaneNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Ray)>(&::Mirror::NetworkWriterExtensions::WriteRay)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181596530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRay", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteRayNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Ray>)>(&::Mirror::NetworkWriterExtensions::WriteRayNullable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1815963e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRayNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteMatrix4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Matrix4x4)>(&::Mirror::NetworkWriterExtensions::WriteMatrix4x4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181595ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteMatrix4x4", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteMatrix4x4Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::UnityEngine::Matrix4x4>)>(&::Mirror::NetworkWriterExtensions::WriteMatrix4x4Nullable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181595d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteMatrix4x4Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Guid)>(&::Mirror::NetworkWriterExtensions::WriteGuid)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181595a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteGuid", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteGuidNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::System::Guid>)>(&::Mirror::NetworkWriterExtensions::WriteGuidNullable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1815958c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteGuidNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteNetworkIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::NetworkIdentity*)>(&::Mirror::NetworkWriterExtensions::WriteNetworkIdentity)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1815960b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteNetworkIdentity", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteNetworkBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::NetworkBehaviour*)>(&::Mirror::NetworkWriterExtensions::WriteNetworkBehaviour)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181595f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteNetworkBehaviour", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Transform*)>(&::Mirror::NetworkWriterExtensions::WriteTransform)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181596e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteTransform", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::GameObject*)>(&::Mirror::NetworkWriterExtensions::WriteGameObject)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181595740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteGameObject", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Uri*)>(&::Mirror::NetworkWriterExtensions::WriteUri)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181596f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUri", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Texture2D*)>(&::Mirror::NetworkWriterExtensions::WriteTexture2D)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181596c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteTexture2D", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::UnityEngine::Sprite*)>(&::Mirror::NetworkWriterExtensions::WriteSprite)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181596960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteSprite", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::DateTime)>(&::Mirror::NetworkWriterExtensions::WriteDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181595320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDateTime", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkWriterExtensions.WriteDateTimeNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::System::Nullable_1<::System::DateTime>)>(&::Mirror::NetworkWriterExtensions::WriteDateTimeNullable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181595220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDateTimeNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkWriterExtensions::WriteByte(::Mirror::NetworkWriter*  writer, uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteByte", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteByteNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteByteNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteSByte(::Mirror::NetworkWriter*  writer, int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteSByte", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteSByteNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteSByteNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteChar(::Mirror::NetworkWriter*  writer, char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteChar", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteCharNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteCharNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteBool(::Mirror::NetworkWriter*  writer, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBool", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteBoolNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBoolNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteShort(::Mirror::NetworkWriter*  writer, int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteShort", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteShortNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteShortNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteUShort(::Mirror::NetworkWriter*  writer, uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUShort", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteUShortNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUShortNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteInt(::Mirror::NetworkWriter*  writer, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteIntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteIntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteUInt(::Mirror::NetworkWriter*  writer, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteUIntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUIntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteLong(::Mirror::NetworkWriter*  writer, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteLong", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteLongNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteLongNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteULong(::Mirror::NetworkWriter*  writer, uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteULong", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteULongNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteULongNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteFloat(::Mirror::NetworkWriter*  writer, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteFloat", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteFloatNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteFloatNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteDouble(::Mirror::NetworkWriter*  writer, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDouble", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteDoubleNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDoubleNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteDecimal(::Mirror::NetworkWriter*  writer, ::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDecimal", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteDecimalNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDecimalNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteString(::Mirror::NetworkWriter*  writer, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteString", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteBytesAndSizeSegment(::Mirror::NetworkWriter*  writer, ::System::ArraySegment_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBytesAndSizeSegment", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, buffer);
}
inline void Mirror::NetworkWriterExtensions::WriteBytesAndSize(::Mirror::NetworkWriter*  writer, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBytesAndSize", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, buffer);
}
inline void Mirror::NetworkWriterExtensions::WriteBytesAndSize(::Mirror::NetworkWriter*  writer, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteBytesAndSize", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, buffer, offset, count);
}
template<typename T>
inline void Mirror::NetworkWriterExtensions::WriteArraySegment(::Mirror::NetworkWriter*  writer, ::System::ArraySegment_1<T>  segment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                    {"WriteArraySegment", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::ArraySegment_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, segment);
}
inline void Mirror::NetworkWriterExtensions::WriteVector2(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector2Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector3(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector3Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector4(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector4", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector4Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector4Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector2Int(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector2Int  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2Int", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector2IntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector2Int>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector2IntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector2Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector3Int(::Mirror::NetworkWriter*  writer, ::UnityEngine::Vector3Int  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3Int", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteVector3IntNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Vector3Int>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteVector3IntNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteColor(::Mirror::NetworkWriter*  writer, ::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColor", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteColorNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColorNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteColor32(::Mirror::NetworkWriter*  writer, ::UnityEngine::Color32  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColor32", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteColor32Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Color32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteColor32Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Color32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteQuaternion(::Mirror::NetworkWriter*  writer, ::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteQuaternion", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteQuaternionNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteQuaternionNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteRect(::Mirror::NetworkWriter*  writer, ::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRect", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteRectNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Rect>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRectNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WritePlane(::Mirror::NetworkWriter*  writer, ::UnityEngine::Plane  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WritePlane", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WritePlaneNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Plane>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WritePlaneNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteRay(::Mirror::NetworkWriter*  writer, ::UnityEngine::Ray  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRay", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteRayNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Ray>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteRayNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteMatrix4x4(::Mirror::NetworkWriter*  writer, ::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteMatrix4x4", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteMatrix4x4Nullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::UnityEngine::Matrix4x4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteMatrix4x4Nullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteGuid(::Mirror::NetworkWriter*  writer, ::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteGuid", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteGuidNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::System::Guid>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteGuidNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteNetworkIdentity(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkIdentity*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteNetworkIdentity", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteNetworkBehaviour(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkBehaviour*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteNetworkBehaviour", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteTransform(::Mirror::NetworkWriter*  writer, ::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteTransform", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::NetworkWriterExtensions::WriteGameObject(::Mirror::NetworkWriter*  writer, ::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteGameObject", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
template<typename T>
inline void Mirror::NetworkWriterExtensions::WriteList(::Mirror::NetworkWriter*  writer, ::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                    {"WriteList", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, list);
}
template<typename T>
inline void Mirror::NetworkWriterExtensions::WriteArray(::Mirror::NetworkWriter*  writer, ::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                    {"WriteArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, array);
}
inline void Mirror::NetworkWriterExtensions::WriteUri(::Mirror::NetworkWriter*  writer, ::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteUri", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, uri);
}
inline void Mirror::NetworkWriterExtensions::WriteTexture2D(::Mirror::NetworkWriter*  writer, ::UnityEngine::Texture2D*  texture2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteTexture2D", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, texture2D);
}
inline void Mirror::NetworkWriterExtensions::WriteSprite(::Mirror::NetworkWriter*  writer, ::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteSprite", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, sprite);
}
inline void Mirror::NetworkWriterExtensions::WriteDateTime(::Mirror::NetworkWriter*  writer, ::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDateTime", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, dateTime);
}
inline void Mirror::NetworkWriterExtensions::WriteDateTimeNullable(::Mirror::NetworkWriter*  writer, ::System::Nullable_1<::System::DateTime>  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkWriterExtensions*>(),
                        {"WriteDateTimeNullable", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, dateTime);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkWriterExtensions::NetworkWriterExtensions()   {
}
