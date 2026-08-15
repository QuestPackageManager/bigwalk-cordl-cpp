#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/DissonanceNetworkMessageExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessageExtensions_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessageExtensions_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessage_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::*)()>(&::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::*)()>(&::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::setStaticF___9(::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*, "<>9", ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>(std::forward<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>(value));
}
inline ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c* Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*, "<>9", ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>();
}
inline void Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c* Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions___c::DissonanceNetworkMessageExtensions___c()   {
}
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage)>(&::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803bf950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*>(),
                        {"Serialize", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage (*)(::Mirror::NetworkReader*)>(&::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::Deserialize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803bf7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*>(),
                        {"Deserialize", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::setStaticF_SerializationBuffers(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*, "SerializationBuffers", ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*>(std::forward<::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*>(value));
}
inline ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::getStaticF_SerializationBuffers()  {
return ::cordl_internals::getStaticField<::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*, "SerializationBuffers", ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*>();
}
inline void Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::Serialize(::Mirror::NetworkWriter*  writer, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*>(),
                        {"Serialize", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::Deserialize(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions*>(),
                        {"Deserialize", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessageExtensions::DissonanceNetworkMessageExtensions()   {
}
