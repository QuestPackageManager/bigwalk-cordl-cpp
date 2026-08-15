#pragma once
// IWYU pragma private; include "Mono/Btls/IMonoBtlsBioMono.hpp"
#include "Mono/Btls/zzzz__IMonoBtlsBioMono_def.hpp"
//  Writing Method size for method: ::Mono::Btls::IMonoBtlsBioMono.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::IMonoBtlsBioMono::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<bool>)>(&::Mono::Btls::IMonoBtlsBioMono::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(),
                    {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::IMonoBtlsBioMono.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::IMonoBtlsBioMono::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Btls::IMonoBtlsBioMono::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(),
                    {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::IMonoBtlsBioMono.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::IMonoBtlsBioMono::*)()>(&::Mono::Btls::IMonoBtlsBioMono::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(),
                    {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::IMonoBtlsBioMono.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::IMonoBtlsBioMono::*)()>(&::Mono::Btls::IMonoBtlsBioMono::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(),
                    {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 3}
                ));
    return ___internal_method;
  }
};
inline int32_t Mono::Btls::IMonoBtlsBioMono::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<bool>  wantMore)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, wantMore);
}
inline bool Mono::Btls::IMonoBtlsBioMono::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, size);
}
inline void Mono::Btls::IMonoBtlsBioMono::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::IMonoBtlsBioMono::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::IMonoBtlsBioMono*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
