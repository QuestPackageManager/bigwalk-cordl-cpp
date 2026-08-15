#pragma once
// IWYU pragma private; include "Mirror/Reader_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__Reader_1_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename T>
inline void Mirror::Reader_1<T>::setStaticF_read(::System::Func_2<::Mirror::NetworkReader*,T>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Mirror::NetworkReader*,T>*, "read", ::Mirror::Reader_1<T>*>(std::forward<::System::Func_2<::Mirror::NetworkReader*,T>*>(value));
}
template<typename T>
inline ::System::Func_2<::Mirror::NetworkReader*,T>* Mirror::Reader_1<T>::getStaticF_read()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Mirror::NetworkReader*,T>*, "read", ::Mirror::Reader_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::Reader_1<T>::Reader_1()   {
}
