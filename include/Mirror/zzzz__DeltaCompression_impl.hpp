#pragma once
// IWYU pragma private; include "Mirror/DeltaCompression.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__DeltaCompression_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__Vector3Long_def.hpp"
//  Writing Method size for method: ::Mirror::DeltaCompression.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, int64_t, int64_t)>(&::Mirror::DeltaCompression::Compress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815909a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Compress", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DeltaCompression.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Mirror::NetworkReader*, int64_t)>(&::Mirror::DeltaCompression::Decompress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815909c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Decompress", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DeltaCompression.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::Vector3Long, ::Mirror::Vector3Long)>(&::Mirror::DeltaCompression::Compress)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181590910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Compress", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DeltaCompression.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Vector3Long (*)(::Mirror::NetworkReader*, ::Mirror::Vector3Long)>(&::Mirror::DeltaCompression::Decompress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815909f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Decompress", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::DeltaCompression::Compress(::Mirror::NetworkWriter*  writer, int64_t  last, int64_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Compress", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, last, current);
}
inline int64_t Mirror::DeltaCompression::Decompress(::Mirror::NetworkReader*  reader, int64_t  last)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Decompress", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, reader, last);
}
inline void Mirror::DeltaCompression::Compress(::Mirror::NetworkWriter*  writer, ::Mirror::Vector3Long  last, ::Mirror::Vector3Long  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Compress", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Vector3Long>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, last, current);
}
inline ::Mirror::Vector3Long Mirror::DeltaCompression::Decompress(::Mirror::NetworkReader*  reader, ::Mirror::Vector3Long  last)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DeltaCompression*>(),
                        {"Decompress", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::Vector3Long>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Vector3Long>(nullptr, ___internal_method, reader, last);
}
// Ctor Parameters []
constexpr ::Mirror::DeltaCompression::DeltaCompression()   {
}
