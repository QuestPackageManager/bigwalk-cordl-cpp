#pragma once
// IWYU pragma private; include "Mirror/Discovery/ServerFoundUnityEvent_1.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Mirror/Discovery/zzzz__ServerFoundUnityEvent_1_def.hpp"
template<typename TResponseType>
inline void Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResponseType>
inline ::Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>* Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>*>());
}
// Ctor Parameters []
template<typename TResponseType>
constexpr ::Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>::ServerFoundUnityEvent_1()   {
}
