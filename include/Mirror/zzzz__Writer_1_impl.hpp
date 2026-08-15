#pragma once
// IWYU pragma private; include "Mirror/Writer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Writer_1_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template<typename T>
inline void Mirror::Writer_1<T>::setStaticF_write(::System::Action_2<::Mirror::NetworkWriter*,T>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Mirror::NetworkWriter*,T>*, "write", ::Mirror::Writer_1<T>*>(std::forward<::System::Action_2<::Mirror::NetworkWriter*,T>*>(value));
}
template<typename T>
inline ::System::Action_2<::Mirror::NetworkWriter*,T>* Mirror::Writer_1<T>::getStaticF_write()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Mirror::NetworkWriter*,T>*, "write", ::Mirror::Writer_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::Writer_1<T>::Writer_1()   {
}
