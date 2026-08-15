#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/Hash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__Hash_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::Hash.CreateHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::WaveHarmonic::Crest::Utility::Hash::CreateHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825679b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"CreateHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::Hash.AddFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::by_ref<int32_t>)>(&::WaveHarmonic::Crest::Utility::Hash::AddFloat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182567930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::Hash.AddInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<int32_t>)>(&::WaveHarmonic::Crest::Utility::Hash::AddInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182567960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::Hash.AddBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<int32_t>)>(&::WaveHarmonic::Crest::Utility::Hash::AddBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182567910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddBool", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::Hash.AddObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<int32_t>)>(&::WaveHarmonic::Crest::Utility::Hash::AddObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182567970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t WaveHarmonic::Crest::Utility::Hash::CreateHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"CreateHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::Utility::Hash::AddFloat(float_t  value, ::by_ref<int32_t>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
inline void WaveHarmonic::Crest::Utility::Hash::AddInt(int32_t  value, ::by_ref<int32_t>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
inline void WaveHarmonic::Crest::Utility::Hash::AddBool(bool  value, ::by_ref<int32_t>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddBool", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
inline void WaveHarmonic::Crest::Utility::Hash::AddObject(::System::Object*  value, ::by_ref<int32_t>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                        {"AddObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
template<typename T>
inline void WaveHarmonic::Crest::Utility::Hash::AddObject(T  value, ::by_ref<int32_t>  hash)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Utility::Hash*>(),
                    {"AddObject", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Utility::Hash::Hash()   {
}
