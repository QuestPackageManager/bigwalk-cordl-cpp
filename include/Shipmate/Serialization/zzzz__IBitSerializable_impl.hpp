#pragma once
// IWYU pragma private; include "Shipmate/Serialization/IBitSerializable.hpp"
#include "Shipmate/Serialization/zzzz__IBitSerializable_def.hpp"
//  Writing Method size for method: ::Shipmate::Serialization::IBitSerializable.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Serialization::IBitSerializable::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::Shipmate::Serialization::IBitSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Serialization::IBitSerializable*>(),
                    {::i2c::class_of<::Shipmate::Serialization::IBitSerializable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Serialization::IBitSerializable.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Serialization::IBitSerializable::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::Shipmate::Serialization::IBitSerializable::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Serialization::IBitSerializable*>(),
                    {::i2c::class_of<::Shipmate::Serialization::IBitSerializable*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Shipmate::Serialization::IBitSerializable::Serialize(::ArrayW<uint8_t>  aData, ::by_ref<int32_t>  aWritePos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Serialization::IBitSerializable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData, aWritePos);
}
inline void Shipmate::Serialization::IBitSerializable::Deserialize(::ArrayW<uint8_t>  aData, ::by_ref<int32_t>  aReadPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Serialization::IBitSerializable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData, aReadPos);
}
