#pragma once
// IWYU pragma private; include "Mirror/NetworkReaderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkReaderExtensions_def.hpp"
#include "Mirror/zzzz__NetworkBehaviourSyncVar_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
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
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154a360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadByte", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadByteNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint8_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadByteNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadByteNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadSByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadSByte", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadSByteNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int8_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadSByteNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadSByteNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadChar", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadCharNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<char16_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadCharNullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadCharNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154a2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBool", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadBoolNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadBoolNullable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18154a240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBoolNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadShort", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadShortNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int16_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadShortNullable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18154b8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadShortNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadUShort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUShort", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadUShortNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint16_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadUShortNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUShortNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadIntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadIntNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadIntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadUInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154be50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadUIntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint32_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadUIntNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUIntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadLong)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadLong", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadLongNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadLongNullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154afe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadLongNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadULong)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadULong", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadULongNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint64_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadULongNullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadULongNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadFloat", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadFloatNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadFloatNullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadFloatNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDouble", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadDoubleNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadDoubleNullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDoubleNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadDecimal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDecimal", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadDecimalNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadDecimalNullable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18154aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDecimalNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18154bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadString", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadBytesAndSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadBytesAndSize)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18154a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBytesAndSize", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Mirror::NetworkReader*, int32_t)>(&::Mirror::NetworkReaderExtensions::ReadBytes)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18154a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBytes", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadBytesAndSizeSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadBytesAndSizeSegment)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18154a380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBytesAndSizeSegment", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector2Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector2> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector2Nullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector3Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector3Nullable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154c440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector4", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector4Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector4> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector4Nullable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector4Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector2Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector2Int)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2Int", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector2IntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector2Int> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector2IntNullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2IntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector3Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector3Int)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3Int", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadVector3IntNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3Int> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadVector3IntNullable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3IntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154a970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColor", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadColorNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Color> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadColorNullable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColorNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadColor32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadColor32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18154a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColor32", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadColor32Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Color32> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadColor32Nullable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColor32Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadQuaternion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154b510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadQuaternion", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadQuaternionNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadQuaternionNullable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154b480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadQuaternionNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadRect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRect", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadRectNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Rect> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadRectNullable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18154b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRectNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadPlane)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154b3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadPlane", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadPlaneNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Plane> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadPlaneNullable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18154b2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadPlaneNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadRay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRay", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadRayNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Ray> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadRayNullable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18154b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRayNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadMatrix4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadMatrix4x4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadMatrix4x4", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadMatrix4x4Nullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Matrix4x4> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadMatrix4x4Nullable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18154b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadMatrix4x4Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadGuid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18154ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadGuid", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadGuidNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Guid> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadGuidNullable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18154acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadGuidNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadNetworkIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadNetworkIdentity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154b2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadNetworkIdentity", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadNetworkBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkBehaviour> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadNetworkBehaviour)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154b230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadNetworkBehaviour", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadNetworkBehaviourSyncVar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkBehaviourSyncVar (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadNetworkBehaviourSyncVar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154b1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadNetworkBehaviourSyncVar", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadTransform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadTransform", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadGameObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154ac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadGameObject", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadUri)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18154bf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUri", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadTexture2D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18154bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadTexture2D", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadSprite)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18154ba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadSprite", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadDateTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDateTime", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkReaderExtensions.ReadDateTimeNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkReaderExtensions::ReadDateTimeNullable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDateTimeNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Mirror::NetworkReaderExtensions::ReadByte(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadByte", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<uint8_t> Mirror::NetworkReaderExtensions::ReadByteNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadByteNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint8_t>>(nullptr, ___internal_method, reader);
}
inline int8_t Mirror::NetworkReaderExtensions::ReadSByte(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadSByte", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<int8_t> Mirror::NetworkReaderExtensions::ReadSByteNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadSByteNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int8_t>>(nullptr, ___internal_method, reader);
}
inline char16_t Mirror::NetworkReaderExtensions::ReadChar(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadChar", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<char16_t> Mirror::NetworkReaderExtensions::ReadCharNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadCharNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<char16_t>>(nullptr, ___internal_method, reader);
}
inline bool Mirror::NetworkReaderExtensions::ReadBool(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBool", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<bool> Mirror::NetworkReaderExtensions::ReadBoolNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBoolNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(nullptr, ___internal_method, reader);
}
inline int16_t Mirror::NetworkReaderExtensions::ReadShort(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadShort", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<int16_t> Mirror::NetworkReaderExtensions::ReadShortNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadShortNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int16_t>>(nullptr, ___internal_method, reader);
}
inline uint16_t Mirror::NetworkReaderExtensions::ReadUShort(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUShort", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<uint16_t> Mirror::NetworkReaderExtensions::ReadUShortNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUShortNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(nullptr, ___internal_method, reader);
}
inline int32_t Mirror::NetworkReaderExtensions::ReadInt(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<int32_t> Mirror::NetworkReaderExtensions::ReadIntNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadIntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, reader);
}
inline uint32_t Mirror::NetworkReaderExtensions::ReadUInt(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<uint32_t> Mirror::NetworkReaderExtensions::ReadUIntNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUIntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint32_t>>(nullptr, ___internal_method, reader);
}
inline int64_t Mirror::NetworkReaderExtensions::ReadLong(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadLong", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<int64_t> Mirror::NetworkReaderExtensions::ReadLongNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadLongNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(nullptr, ___internal_method, reader);
}
inline uint64_t Mirror::NetworkReaderExtensions::ReadULong(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadULong", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<uint64_t> Mirror::NetworkReaderExtensions::ReadULongNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadULongNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>>(nullptr, ___internal_method, reader);
}
inline float_t Mirror::NetworkReaderExtensions::ReadFloat(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadFloat", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<float_t> Mirror::NetworkReaderExtensions::ReadFloatNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadFloatNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(nullptr, ___internal_method, reader);
}
inline double_t Mirror::NetworkReaderExtensions::ReadDouble(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDouble", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<double_t> Mirror::NetworkReaderExtensions::ReadDoubleNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDoubleNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(nullptr, ___internal_method, reader);
}
inline ::System::Decimal Mirror::NetworkReaderExtensions::ReadDecimal(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDecimal", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::System::Decimal> Mirror::NetworkReaderExtensions::ReadDecimalNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDecimalNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(nullptr, ___internal_method, reader);
}
inline ::StringW Mirror::NetworkReaderExtensions::ReadString(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadString", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, reader);
}
inline ::ArrayW<uint8_t> Mirror::NetworkReaderExtensions::ReadBytesAndSize(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBytesAndSize", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, reader);
}
inline ::ArrayW<uint8_t> Mirror::NetworkReaderExtensions::ReadBytes(::Mirror::NetworkReader*  reader, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBytes", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, reader, count);
}
inline ::System::ArraySegment_1<uint8_t> Mirror::NetworkReaderExtensions::ReadBytesAndSizeSegment(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadBytesAndSizeSegment", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Vector2 Mirror::NetworkReaderExtensions::ReadVector2(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Vector2> Mirror::NetworkReaderExtensions::ReadVector2Nullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector2>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Vector3 Mirror::NetworkReaderExtensions::ReadVector3(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> Mirror::NetworkReaderExtensions::ReadVector3Nullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Vector4 Mirror::NetworkReaderExtensions::ReadVector4(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector4", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Vector4> Mirror::NetworkReaderExtensions::ReadVector4Nullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector4Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector4>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Vector2Int Mirror::NetworkReaderExtensions::ReadVector2Int(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2Int", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Vector2Int> Mirror::NetworkReaderExtensions::ReadVector2IntNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector2IntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector2Int>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Vector3Int Mirror::NetworkReaderExtensions::ReadVector3Int(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3Int", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Vector3Int> Mirror::NetworkReaderExtensions::ReadVector3IntNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadVector3IntNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3Int>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Color Mirror::NetworkReaderExtensions::ReadColor(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColor", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Color> Mirror::NetworkReaderExtensions::ReadColorNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColorNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Color>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Color32 Mirror::NetworkReaderExtensions::ReadColor32(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColor32", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Color32> Mirror::NetworkReaderExtensions::ReadColor32Nullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadColor32Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Color32>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Quaternion Mirror::NetworkReaderExtensions::ReadQuaternion(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadQuaternion", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> Mirror::NetworkReaderExtensions::ReadQuaternionNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadQuaternionNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Rect Mirror::NetworkReaderExtensions::ReadRect(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRect", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Rect> Mirror::NetworkReaderExtensions::ReadRectNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRectNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Rect>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Plane Mirror::NetworkReaderExtensions::ReadPlane(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadPlane", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Plane> Mirror::NetworkReaderExtensions::ReadPlaneNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadPlaneNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Plane>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Ray Mirror::NetworkReaderExtensions::ReadRay(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRay", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Ray> Mirror::NetworkReaderExtensions::ReadRayNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadRayNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Ray>>(nullptr, ___internal_method, reader);
}
inline ::UnityEngine::Matrix4x4 Mirror::NetworkReaderExtensions::ReadMatrix4x4(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadMatrix4x4", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::UnityEngine::Matrix4x4> Mirror::NetworkReaderExtensions::ReadMatrix4x4Nullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadMatrix4x4Nullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Matrix4x4>>(nullptr, ___internal_method, reader);
}
inline ::System::Guid Mirror::NetworkReaderExtensions::ReadGuid(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadGuid", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::System::Guid> Mirror::NetworkReaderExtensions::ReadGuidNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadGuidNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>>(nullptr, ___internal_method, reader);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkReaderExtensions::ReadNetworkIdentity(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadNetworkIdentity", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, reader);
}
inline ::UnityW<::Mirror::NetworkBehaviour> Mirror::NetworkReaderExtensions::ReadNetworkBehaviour(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadNetworkBehaviour", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkBehaviour>>(nullptr, ___internal_method, reader);
}
template<typename T>
inline T Mirror::NetworkReaderExtensions::ReadNetworkBehaviour(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                    {"ReadNetworkBehaviour", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, reader);
}
inline ::Mirror::NetworkBehaviourSyncVar Mirror::NetworkReaderExtensions::ReadNetworkBehaviourSyncVar(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadNetworkBehaviourSyncVar", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkBehaviourSyncVar>(nullptr, ___internal_method, reader);
}
inline ::UnityW<::UnityEngine::Transform> Mirror::NetworkReaderExtensions::ReadTransform(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadTransform", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, reader);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::NetworkReaderExtensions::ReadGameObject(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadGameObject", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, reader);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Mirror::NetworkReaderExtensions::ReadList(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                    {"ReadList", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, reader);
}
template<typename T>
inline ::ArrayW<T> Mirror::NetworkReaderExtensions::ReadArray(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                    {"ReadArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, reader);
}
inline ::System::Uri* Mirror::NetworkReaderExtensions::ReadUri(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadUri", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, reader);
}
inline ::UnityW<::UnityEngine::Texture2D> Mirror::NetworkReaderExtensions::ReadTexture2D(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadTexture2D", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, reader);
}
inline ::UnityW<::UnityEngine::Sprite> Mirror::NetworkReaderExtensions::ReadSprite(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadSprite", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, reader);
}
inline ::System::DateTime Mirror::NetworkReaderExtensions::ReadDateTime(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDateTime", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, reader);
}
inline ::System::Nullable_1<::System::DateTime> Mirror::NetworkReaderExtensions::ReadDateTimeNullable(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkReaderExtensions*>(),
                        {"ReadDateTimeNullable", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkReaderExtensions::NetworkReaderExtensions()   {
}
