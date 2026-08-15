#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SessionContext.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SessionContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SessionContext::*)(::StringW, uint32_t)>(&::Dissonance::Audio::Playback::SessionContext::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805e92a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SessionContext.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SessionContext::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::SessionContext::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e91a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SessionContext.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SessionContext::*)(::System::Object*)>(&::Dissonance::Audio::Playback::SessionContext::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e9110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SessionContext.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::SessionContext::*)()>(&::Dissonance::Audio::Playback::SessionContext::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e9210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::SessionContext::_ctor(::StringW  playerName, uint32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerName, id);
}
inline bool Dissonance::Audio::Playback::SessionContext::Equals(::Dissonance::Audio::Playback::SessionContext  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Dissonance::Audio::Playback::SessionContext::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Dissonance::Audio::Playback::SessionContext::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::SessionContext>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>"
constexpr  Dissonance::Audio::Playback::SessionContext::operator ::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>*()  {
return static_cast<::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>"
constexpr ::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>* Dissonance::Audio::Playback::SessionContext::i___System__IEquatable_1___Dissonance__Audio__Playback__SessionContext_()  {
return static_cast<::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "PlayerName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Playback::SessionContext::SessionContext(::StringW  PlayerName, uint32_t  Id) noexcept  {
this->PlayerName = PlayerName;
this->Id = Id;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SessionContext::SessionContext()   {
}
