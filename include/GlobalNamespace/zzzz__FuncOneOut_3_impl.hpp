#pragma once
// IWYU pragma private; include "GlobalNamespace/FuncOneOut_3.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T,typename U,typename V>
inline void GlobalNamespace::FuncOneOut_3<T,U,V>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FuncOneOut_3<T,U,V>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T,typename U,typename V>
inline V GlobalNamespace::FuncOneOut_3<T,U,V>::Invoke(T  input, ::by_ref<U>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FuncOneOut_3<T,U,V>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<V>(this, ___internal_method, input, output);
}
template<typename T,typename U,typename V>
inline ::System::IAsyncResult* GlobalNamespace::FuncOneOut_3<T,U,V>::BeginInvoke(T  input, ::by_ref<U>  output, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FuncOneOut_3<T,U,V>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, input, output, callback, object);
}
template<typename T,typename U,typename V>
inline V GlobalNamespace::FuncOneOut_3<T,U,V>::EndInvoke(::by_ref<U>  output, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FuncOneOut_3<T,U,V>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<V>(this, ___internal_method, output, result);
}
template<typename T,typename U,typename V>
inline ::GlobalNamespace::FuncOneOut_3<T,U,V>* GlobalNamespace::FuncOneOut_3<T,U,V>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FuncOneOut_3<T,U,V>*>(object, method));
}
// Ctor Parameters []
template<typename T,typename U,typename V>
constexpr ::GlobalNamespace::FuncOneOut_3<T,U,V>::FuncOneOut_3()   {
}
