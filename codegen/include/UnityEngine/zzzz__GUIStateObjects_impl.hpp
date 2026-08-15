#pragma once
// IWYU pragma private; include "UnityEngine/GUIStateObjects.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUIStateObjects_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIStateObjects.GetStateObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, int32_t)>(&::UnityEngine::GUIStateObjects::GetStateObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822c5990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUIStateObjects*>(),
                        {"GetStateObject", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::GUIStateObjects::setStaticF_s_StateCache(::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*, "s_StateCache", ::UnityEngine::GUIStateObjects*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>* UnityEngine::GUIStateObjects::getStaticF_s_StateCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*, "s_StateCache", ::UnityEngine::GUIStateObjects*>();
}
inline ::System::Object* UnityEngine::GUIStateObjects::GetStateObject(::System::Type*  t, int32_t  controlID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUIStateObjects*>(),
                        {"GetStateObject", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, t, controlID);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIStateObjects::GUIStateObjects()   {
}
