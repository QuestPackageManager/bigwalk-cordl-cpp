#pragma once
// IWYU pragma private; include "Rewired/Internal/ControllerTemplateFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Rewired/Internal/zzzz__ControllerTemplateFactory_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::ControllerTemplateFactory.get_templateTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::Rewired::Internal::ControllerTemplateFactory::get_templateTypes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::ControllerTemplateFactory*>(),
                        {"get_templateTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::ControllerTemplateFactory.get_templateInterfaceTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::Rewired::Internal::ControllerTemplateFactory::get_templateInterfaceTypes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::ControllerTemplateFactory*>(),
                        {"get_templateInterfaceTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::ControllerTemplateFactory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::IControllerTemplate* (*)(::System::Guid, ::System::Object*)>(&::Rewired::Internal::ControllerTemplateFactory::Create)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1803a96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::ControllerTemplateFactory*>(),
                        {"Create", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Internal::ControllerTemplateFactory::setStaticF__defaultTemplateTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "_defaultTemplateTypes", ::Rewired::Internal::ControllerTemplateFactory*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> Rewired::Internal::ControllerTemplateFactory::getStaticF__defaultTemplateTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "_defaultTemplateTypes", ::Rewired::Internal::ControllerTemplateFactory*>();
}
inline void Rewired::Internal::ControllerTemplateFactory::setStaticF__defaultTemplateInterfaceTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "_defaultTemplateInterfaceTypes", ::Rewired::Internal::ControllerTemplateFactory*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> Rewired::Internal::ControllerTemplateFactory::getStaticF__defaultTemplateInterfaceTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "_defaultTemplateInterfaceTypes", ::Rewired::Internal::ControllerTemplateFactory*>();
}
inline ::ArrayW<::System::Type*> Rewired::Internal::ControllerTemplateFactory::get_templateTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::ControllerTemplateFactory*>(),
                        {"get_templateTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Type*> Rewired::Internal::ControllerTemplateFactory::get_templateInterfaceTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::ControllerTemplateFactory*>(),
                        {"get_templateInterfaceTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline ::Rewired::IControllerTemplate* Rewired::Internal::ControllerTemplateFactory::Create(::System::Guid  typeGuid, ::System::Object*  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::ControllerTemplateFactory*>(),
                        {"Create", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::IControllerTemplate*>(nullptr, ___internal_method, typeGuid, payload);
}
// Ctor Parameters []
constexpr ::Rewired::Internal::ControllerTemplateFactory::ControllerTemplateFactory()   {
}
