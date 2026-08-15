#pragma once
// IWYU pragma private; include "Shipmate/Porting/LobbyData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__LobbyData_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::LobbyData.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::LobbyData::*)(::ArrayW<uint8_t>)>(&::Shipmate::Porting::LobbyData::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::LobbyData*>(),
                    {::i2c::class_of<::Shipmate::Porting::LobbyData*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::LobbyData.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Shipmate::Porting::LobbyData::*)()>(&::Shipmate::Porting::LobbyData::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::LobbyData*>(),
                    {::i2c::class_of<::Shipmate::Porting::LobbyData*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::LobbyData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::LobbyData::*)()>(&::Shipmate::Porting::LobbyData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::LobbyData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmate::Porting::LobbyData::__cordl_internal_get_roomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomName;
}
constexpr ::StringW const& Shipmate::Porting::LobbyData::__cordl_internal_get_roomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomName;
}
constexpr void Shipmate::Porting::LobbyData::__cordl_internal_set_roomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomName = value;
}
inline void Shipmate::Porting::LobbyData::Deserialize(::ArrayW<uint8_t>  aSerializedData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::LobbyData*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aSerializedData);
}
inline ::ArrayW<uint8_t> Shipmate::Porting::LobbyData::Serialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::LobbyData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Shipmate::Porting::LobbyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::LobbyData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::LobbyData* Shipmate::Porting::LobbyData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::LobbyData*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::LobbyData::LobbyData()   {
}
