#pragma once
// IWYU pragma private; include "Rewired/Utils/Factory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__Factory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Factory.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*>)>(&::Rewired::Utils::Factory::CreateInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18192c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Factory*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::Utils::Factory::CreateInstance(::System::Type*  type, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Factory*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, args);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Factory::Factory()   {
}
