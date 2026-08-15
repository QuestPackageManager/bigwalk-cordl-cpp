#pragma once
// IWYU pragma private; include "Mirror/Compression.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Compression_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__Vector3Long_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Mirror::Compression.ScaleToLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, ::by_ref<int64_t>)>(&::Mirror::Compression::ScaleToLong)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815907b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToLong", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleToLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::by_ref<int64_t>, ::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Mirror::Compression::ScaleToLong)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181590850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToLong", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleToLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t, ::by_ref<::Mirror::Vector3Long>)>(&::Mirror::Compression::ScaleToLong)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181517b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToLong", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Mirror::Vector3Long>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int64_t, float_t)>(&::Mirror::Compression::ScaleToFloat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815906a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToFloat", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int64_t, int64_t, int64_t, float_t)>(&::Mirror::Compression::ScaleToFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181590710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToFloat", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Mirror::Vector3Long, float_t)>(&::Mirror::Compression::ScaleToFloat)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181590600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToFloat", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleFloatToUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(float_t, float_t, float_t, uint16_t, uint16_t)>(&::Mirror::Compression::ScaleFloatToUShort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815905c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleFloatToUShort", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.ScaleUShortToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint16_t, uint16_t, uint16_t, float_t, float_t)>(&::Mirror::Compression::ScaleUShortToFloat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815908d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleUShortToFloat", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.LargestAbsoluteComponentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector4, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::Mirror::Compression::LargestAbsoluteComponentIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181590460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"LargestAbsoluteComponentIndex", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.QuaternionElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion, int32_t)>(&::Mirror::Compression::QuaternionElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181590530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"QuaternionElement", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.CompressQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Quaternion)>(&::Mirror::Compression::CompressQuaternion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18158fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"CompressQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.QuaternionNormalizeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Mirror::Compression::QuaternionNormalizeSafe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181590560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"QuaternionNormalizeSafe", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.DecompressQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(uint32_t)>(&::Mirror::Compression::DecompressQuaternion)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181590060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"DecompressQuaternion", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.CompressVarUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, uint64_t)>(&::Mirror::Compression::CompressVarUInt)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18158fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"CompressVarUInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.CompressVarInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, int64_t)>(&::Mirror::Compression::CompressVarInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"CompressVarInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.DecompressVarUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Mirror::NetworkReader*)>(&::Mirror::Compression::DecompressVarUInt)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181590220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"DecompressVarUInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Compression.DecompressVarInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Mirror::NetworkReader*)>(&::Mirror::Compression::DecompressVarInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181590200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"DecompressVarInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Mirror::Compression::ScaleToLong(float_t  value, float_t  precision, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToLong", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, result);
}
inline bool Mirror::Compression::ScaleToLong(::UnityEngine::Vector3  value, float_t  precision, ::by_ref<int64_t>  x, ::by_ref<int64_t>  y, ::by_ref<int64_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToLong", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, x, y, z);
}
inline bool Mirror::Compression::ScaleToLong(::UnityEngine::Vector3  value, float_t  precision, ::by_ref<::Mirror::Vector3Long>  quantized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToLong", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Mirror::Vector3Long>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, quantized);
}
inline float_t Mirror::Compression::ScaleToFloat(int64_t  value, float_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToFloat", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, precision);
}
inline ::UnityEngine::Vector3 Mirror::Compression::ScaleToFloat(int64_t  x, int64_t  y, int64_t  z, float_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToFloat", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, x, y, z, precision);
}
inline ::UnityEngine::Vector3 Mirror::Compression::ScaleToFloat(::Mirror::Vector3Long  value, float_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleToFloat", {}, {::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, precision);
}
inline uint16_t Mirror::Compression::ScaleFloatToUShort(float_t  value, float_t  minValue, float_t  maxValue, uint16_t  minTarget, uint16_t  maxTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleFloatToUShort", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, minValue, maxValue, minTarget, maxTarget);
}
inline float_t Mirror::Compression::ScaleUShortToFloat(uint16_t  value, uint16_t  minValue, uint16_t  maxValue, float_t  minTarget, float_t  maxTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"ScaleUShortToFloat", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, minValue, maxValue, minTarget, maxTarget);
}
inline int32_t Mirror::Compression::LargestAbsoluteComponentIndex(::UnityEngine::Vector4  value, ::by_ref<float_t>  largestAbs, ::by_ref<::UnityEngine::Vector3>  withoutLargest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"LargestAbsoluteComponentIndex", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, largestAbs, withoutLargest);
}
inline float_t Mirror::Compression::QuaternionElement(::UnityEngine::Quaternion  q, int32_t  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"QuaternionElement", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q, element);
}
inline uint32_t Mirror::Compression::CompressQuaternion(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"CompressQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion Mirror::Compression::QuaternionNormalizeSafe(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"QuaternionNormalizeSafe", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Mirror::Compression::DecompressQuaternion(uint32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"DecompressQuaternion", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, data);
}
inline void Mirror::Compression::CompressVarUInt(::Mirror::NetworkWriter*  writer, uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"CompressVarUInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::Compression::CompressVarInt(::Mirror::NetworkWriter*  writer, int64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"CompressVarInt", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, i);
}
inline uint64_t Mirror::Compression::DecompressVarUInt(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"DecompressVarUInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, reader);
}
inline int64_t Mirror::Compression::DecompressVarInt(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Compression*>(),
                        {"DecompressVarInt", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::Mirror::Compression::Compression()   {
}
