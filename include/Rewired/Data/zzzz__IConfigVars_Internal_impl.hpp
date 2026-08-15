#pragma once
// IWYU pragma private; include "Rewired/Data/IConfigVars_Internal.hpp"
#include "Rewired/Data/zzzz__IConfigVars_Internal_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__KeyedGetSetValueStore_1_def.hpp"
//  Writing Method size for method: ::Rewired::Data::IConfigVars_Internal.get_values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* (::Rewired::Data::IConfigVars_Internal::*)()>(&::Rewired::Data::IConfigVars_Internal::get_values)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::IConfigVars_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::IConfigVars_Internal*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* Rewired::Data::IConfigVars_Internal::get_values()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::IConfigVars_Internal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*>(this, ___internal_method);
}
