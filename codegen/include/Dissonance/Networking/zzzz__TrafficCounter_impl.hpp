#pragma once
// IWYU pragma private; include "Dissonance/Networking/TrafficCounter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__TrafficCounter_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.get_Packets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Networking::TrafficCounter::*)()>(&::Dissonance::Networking::TrafficCounter::get_Packets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"get_Packets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.set_Packets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TrafficCounter::*)(uint32_t)>(&::Dissonance::Networking::TrafficCounter::set_Packets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"set_Packets", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.get_Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Networking::TrafficCounter::*)()>(&::Dissonance::Networking::TrafficCounter::get_Bytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"get_Bytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.set_Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TrafficCounter::*)(uint32_t)>(&::Dissonance::Networking::TrafficCounter::set_Bytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"set_Bytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.get_BytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Networking::TrafficCounter::*)()>(&::Dissonance::Networking::TrafficCounter::get_BytesPerSecond)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"get_BytesPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.set_BytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TrafficCounter::*)(uint32_t)>(&::Dissonance::Networking::TrafficCounter::set_BytesPerSecond)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"set_BytesPerSecond", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TrafficCounter::*)(int32_t, ::System::Nullable_1<::System::DateTime>)>(&::Dissonance::Networking::TrafficCounter::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805ebd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::TrafficCounter::*)()>(&::Dissonance::Networking::TrafficCounter::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805ebc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                    {::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::ArrayW<::Dissonance::Networking::TrafficCounter*>)>(&::Dissonance::Networking::TrafficCounter::Combine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805eb980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"Combine", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<::Dissonance::Networking::TrafficCounter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t, uint64_t, uint64_t)>(&::Dissonance::Networking::TrafficCounter::Format)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805ebbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"Format", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter.FormatByteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal)>(&::Dissonance::Networking::TrafficCounter::FormatByteString)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805eb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"FormatByteString", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::TrafficCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TrafficCounter::*)()>(&::Dissonance::Networking::TrafficCounter::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ebe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Dissonance::Networking::TrafficCounter::__cordl_internal_get__Packets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Packets_k__BackingField;
}
constexpr uint32_t const& Dissonance::Networking::TrafficCounter::__cordl_internal_get__Packets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Packets_k__BackingField;
}
constexpr void Dissonance::Networking::TrafficCounter::__cordl_internal_set__Packets_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Packets_k__BackingField = value;
}
constexpr uint32_t& Dissonance::Networking::TrafficCounter::__cordl_internal_get__Bytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bytes_k__BackingField;
}
constexpr uint32_t const& Dissonance::Networking::TrafficCounter::__cordl_internal_get__Bytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bytes_k__BackingField;
}
constexpr void Dissonance::Networking::TrafficCounter::__cordl_internal_set__Bytes_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bytes_k__BackingField = value;
}
constexpr uint32_t& Dissonance::Networking::TrafficCounter::__cordl_internal_get__BytesPerSecond_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesPerSecond_k__BackingField;
}
constexpr uint32_t const& Dissonance::Networking::TrafficCounter::__cordl_internal_get__BytesPerSecond_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesPerSecond_k__BackingField;
}
constexpr void Dissonance::Networking::TrafficCounter::__cordl_internal_set__BytesPerSecond_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BytesPerSecond_k__BackingField = value;
}
constexpr uint32_t& Dissonance::Networking::TrafficCounter::__cordl_internal_get__runningTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningTotal;
}
constexpr uint32_t const& Dissonance::Networking::TrafficCounter::__cordl_internal_get__runningTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningTotal;
}
constexpr void Dissonance::Networking::TrafficCounter::__cordl_internal_set__runningTotal(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningTotal = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>*& Dissonance::Networking::TrafficCounter::__cordl_internal_get__updated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updated;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>* const& Dissonance::Networking::TrafficCounter::__cordl_internal_get__updated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updated;
}
constexpr void Dissonance::Networking::TrafficCounter::__cordl_internal_set__updated(::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::DateTime,uint32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updated = value;
}
inline uint32_t Dissonance::Networking::TrafficCounter::get_Packets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"get_Packets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Networking::TrafficCounter::set_Packets(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"set_Packets", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Dissonance::Networking::TrafficCounter::get_Bytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"get_Bytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Networking::TrafficCounter::set_Bytes(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"set_Bytes", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Dissonance::Networking::TrafficCounter::get_BytesPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"get_BytesPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Networking::TrafficCounter::set_BytesPerSecond(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"set_BytesPerSecond", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::TrafficCounter::Update(int32_t  bytes, ::System::Nullable_1<::System::DateTime>  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, now);
}
inline ::StringW Dissonance::Networking::TrafficCounter::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Networking::TrafficCounter::Combine(::by_ref<uint32_t>  packets, ::by_ref<uint32_t>  bytes, ::by_ref<uint32_t>  totalBytesPerSecond, ::ArrayW<::Dissonance::Networking::TrafficCounter*>  counters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"Combine", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<::Dissonance::Networking::TrafficCounter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packets, bytes, totalBytesPerSecond, counters);
}
inline ::StringW Dissonance::Networking::TrafficCounter::Format(uint64_t  packets, uint64_t  bytes, uint64_t  bytesPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"Format", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, packets, bytes, bytesPerSecond);
}
inline ::StringW Dissonance::Networking::TrafficCounter::FormatByteString(::System::Decimal  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {"FormatByteString", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline void Dissonance::Networking::TrafficCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TrafficCounter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Networking::TrafficCounter* Dissonance::Networking::TrafficCounter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::TrafficCounter*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::TrafficCounter::TrafficCounter()   {
}
