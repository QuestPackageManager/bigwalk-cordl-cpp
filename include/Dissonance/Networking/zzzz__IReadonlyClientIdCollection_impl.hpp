#pragma once
// IWYU pragma private; include "Dissonance/Networking/IReadonlyClientIdCollection.hpp"
#include "Dissonance/Networking/zzzz__IReadonlyClientIdCollection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::IReadonlyClientIdCollection.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint16_t> (::Dissonance::Networking::IReadonlyClientIdCollection::*)(::StringW)>(&::Dissonance::Networking::IReadonlyClientIdCollection::GetId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::IReadonlyClientIdCollection*>(),
                    {::i2c::class_of<::Dissonance::Networking::IReadonlyClientIdCollection*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::IReadonlyClientIdCollection.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::IReadonlyClientIdCollection::*)(uint16_t)>(&::Dissonance::Networking::IReadonlyClientIdCollection::GetName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::IReadonlyClientIdCollection*>(),
                    {::i2c::class_of<::Dissonance::Networking::IReadonlyClientIdCollection*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<uint16_t> Dissonance::Networking::IReadonlyClientIdCollection::GetId(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::IReadonlyClientIdCollection*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method, name);
}
inline ::StringW Dissonance::Networking::IReadonlyClientIdCollection::GetName(uint16_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::IReadonlyClientIdCollection*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
