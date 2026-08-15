#pragma once
// IWYU pragma private; include "Mirror/NetworkMessageId_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkMessageId_1_def.hpp"
template<typename T>
inline void Mirror::NetworkMessageId_1<T>::setStaticF_Id(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "Id", ::Mirror::NetworkMessageId_1<T>*>(std::forward<uint16_t>(value));
}
template<typename T>
inline uint16_t Mirror::NetworkMessageId_1<T>::getStaticF_Id()  {
return ::cordl_internals::getStaticField<uint16_t, "Id", ::Mirror::NetworkMessageId_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::NetworkMessageId_1<T>::NetworkMessageId_1()   {
}
