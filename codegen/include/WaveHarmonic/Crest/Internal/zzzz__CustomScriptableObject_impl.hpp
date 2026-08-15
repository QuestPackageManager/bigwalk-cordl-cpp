#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/CustomScriptableObject.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::CustomScriptableObject.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Internal::CustomScriptableObject::*)()>(&::WaveHarmonic::Crest::Internal::CustomScriptableObject::get_Version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::CustomScriptableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Internal::CustomScriptableObject::*)()>(&::WaveHarmonic::Crest::Internal::CustomScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182565520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::CustomScriptableObject.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Internal::CustomScriptableObject::*)()>(&::WaveHarmonic::Crest::Internal::CustomScriptableObject::OnMigrate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::CustomScriptableObject.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Internal::CustomScriptableObject::*)()>(&::WaveHarmonic::Crest::Internal::CustomScriptableObject::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825654b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::CustomScriptableObject.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Internal::CustomScriptableObject::*)()>(&::WaveHarmonic::Crest::Internal::CustomScriptableObject::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::Internal::CustomScriptableObject::__cordl_internal_get__Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version;
}
constexpr int32_t const& WaveHarmonic::Crest::Internal::CustomScriptableObject::__cordl_internal_get__Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version;
}
constexpr void WaveHarmonic::Crest::Internal::CustomScriptableObject::__cordl_internal_set__Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Version = value;
}
inline int32_t WaveHarmonic::Crest::Internal::CustomScriptableObject::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Internal::CustomScriptableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Internal::CustomScriptableObject::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Internal::CustomScriptableObject::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Internal::CustomScriptableObject::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Internal::CustomScriptableObject* WaveHarmonic::Crest::Internal::CustomScriptableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Internal::CustomScriptableObject*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  WaveHarmonic::Crest::Internal::CustomScriptableObject::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* WaveHarmonic::Crest::Internal::CustomScriptableObject::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Internal::CustomScriptableObject::CustomScriptableObject()   {
}
