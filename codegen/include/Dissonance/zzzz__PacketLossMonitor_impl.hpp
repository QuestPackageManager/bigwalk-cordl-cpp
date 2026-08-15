#pragma once
// IWYU pragma private; include "Dissonance/PacketLossMonitor.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__PacketLossMonitor_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::PacketLossMonitor.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::PacketLossMonitor::*)()>(&::Dissonance::PacketLossMonitor::get_PacketLoss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PacketLossMonitor.set_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PacketLossMonitor::*)(float_t)>(&::Dissonance::PacketLossMonitor::set_PacketLoss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PacketLossMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PacketLossMonitor::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::PacketLossMonitor::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ccbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PacketLossMonitor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PacketLossMonitor::*)(::System::Nullable_1<::System::DateTime>)>(&::Dissonance::PacketLossMonitor::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805ccaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"Update", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PacketLossMonitor.CheckTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PacketLossMonitor::*)(::System::DateTime)>(&::Dissonance::PacketLossMonitor::CheckTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ccab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"CheckTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PacketLossMonitor.CheckCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PacketLossMonitor::*)()>(&::Dissonance::PacketLossMonitor::CheckCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"CheckCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PacketLossMonitor.CalculatePacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Dissonance::PacketLossMonitor::*)()>(&::Dissonance::PacketLossMonitor::CalculatePacketLoss)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805cc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"CalculatePacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*& Dissonance::PacketLossMonitor::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>* const& Dissonance::PacketLossMonitor::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Dissonance::PacketLossMonitor::__cordl_internal_set__players(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
constexpr ::System::DateTime& Dissonance::PacketLossMonitor::__cordl_internal_get__lastUpdatedPacketLoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdatedPacketLoss;
}
constexpr ::System::DateTime const& Dissonance::PacketLossMonitor::__cordl_internal_get__lastUpdatedPacketLoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdatedPacketLoss;
}
constexpr void Dissonance::PacketLossMonitor::__cordl_internal_set__lastUpdatedPacketLoss(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdatedPacketLoss = value;
}
constexpr int32_t& Dissonance::PacketLossMonitor::__cordl_internal_get__lastUpdatedPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdatedPlayerCount;
}
constexpr int32_t const& Dissonance::PacketLossMonitor::__cordl_internal_get__lastUpdatedPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdatedPlayerCount;
}
constexpr void Dissonance::PacketLossMonitor::__cordl_internal_set__lastUpdatedPlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdatedPlayerCount = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& Dissonance::PacketLossMonitor::__cordl_internal_get__tmpLossValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpLossValues;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& Dissonance::PacketLossMonitor::__cordl_internal_get__tmpLossValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpLossValues;
}
constexpr void Dissonance::PacketLossMonitor::__cordl_internal_set__tmpLossValues(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpLossValues = value;
}
constexpr float_t& Dissonance::PacketLossMonitor::__cordl_internal_get__PacketLoss_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PacketLoss_k__BackingField;
}
constexpr float_t const& Dissonance::PacketLossMonitor::__cordl_internal_get__PacketLoss_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PacketLoss_k__BackingField;
}
constexpr void Dissonance::PacketLossMonitor::__cordl_internal_set__PacketLoss_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PacketLoss_k__BackingField = value;
}
inline float_t Dissonance::PacketLossMonitor::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::PacketLossMonitor::set_PacketLoss(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::PacketLossMonitor::_ctor(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, players);
}
inline void Dissonance::PacketLossMonitor::Update(::System::Nullable_1<::System::DateTime>  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"Update", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow);
}
inline bool Dissonance::PacketLossMonitor::CheckTime(::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"CheckTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, now);
}
inline bool Dissonance::PacketLossMonitor::CheckCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"CheckCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> Dissonance::PacketLossMonitor::CalculatePacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PacketLossMonitor*>(),
                        {"CalculatePacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline ::Dissonance::PacketLossMonitor* Dissonance::PacketLossMonitor::New_ctor(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::PacketLossMonitor*>(players));
}
// Ctor Parameters []
constexpr ::Dissonance::PacketLossMonitor::PacketLossMonitor()   {
}
