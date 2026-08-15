#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/PacketDelaySimulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__PacketDelaySimulator_def.hpp"
#include "Dissonance/Networking/zzzz__MessageTypes_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Client::PacketDelaySimulator.IsOrderedReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Dissonance::Networking::MessageTypes)>(&::Dissonance::Networking::Client::PacketDelaySimulator::IsOrderedReliable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e1de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PacketDelaySimulator*>(),
                        {"IsOrderedReliable", {}, {::i2c::type_of<::Dissonance::Networking::MessageTypes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PacketDelaySimulator.ShouldLose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::PacketDelaySimulator::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Networking::Client::PacketDelaySimulator::ShouldLose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PacketDelaySimulator*>(),
                        {"ShouldLose", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::PacketDelaySimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::PacketDelaySimulator::*)()>(&::Dissonance::Networking::Client::PacketDelaySimulator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e1df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PacketDelaySimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Random*& Dissonance::Networking::Client::PacketDelaySimulator::__cordl_internal_get__rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnd;
}
constexpr ::System::Random* const& Dissonance::Networking::Client::PacketDelaySimulator::__cordl_internal_get__rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnd;
}
constexpr void Dissonance::Networking::Client::PacketDelaySimulator::__cordl_internal_set__rnd(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rnd = value;
}
inline bool Dissonance::Networking::Client::PacketDelaySimulator::IsOrderedReliable(::Dissonance::Networking::MessageTypes  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PacketDelaySimulator*>(),
                        {"IsOrderedReliable", {}, {::i2c::type_of<::Dissonance::Networking::MessageTypes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, header);
}
inline bool Dissonance::Networking::Client::PacketDelaySimulator::ShouldLose(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PacketDelaySimulator*>(),
                        {"ShouldLose", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline void Dissonance::Networking::Client::PacketDelaySimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::PacketDelaySimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Networking::Client::PacketDelaySimulator* Dissonance::Networking::Client::PacketDelaySimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::PacketDelaySimulator*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::PacketDelaySimulator::PacketDelaySimulator()   {
}
