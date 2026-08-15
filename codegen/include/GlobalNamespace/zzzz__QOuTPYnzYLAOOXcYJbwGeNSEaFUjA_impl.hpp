#pragma once
// IWYU pragma private; include "GlobalNamespace/QOuTPYnzYLAOOXcYJbwGeNSEaFUjA.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__QOuTPYnzYLAOOXcYJbwGeNSEaFUjA_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181a106b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::*)(::System::IntPtr, uint32_t, ::System::IntPtr, ::System::IntPtr)>(&::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(),
                    {::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::*)(::System::IntPtr, uint32_t, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181a10600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(),
                    {::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::*)(::System::IAsyncResult*)>(&::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(),
                    {::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::System::IntPtr GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::Invoke(::System::IntPtr  hWnd, uint32_t  msg, ::System::IntPtr  wParam, ::System::IntPtr  lParam)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, hWnd, msg, wParam, lParam);
}
inline ::System::IAsyncResult* GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::BeginInvoke(::System::IntPtr  hWnd, uint32_t  msg, ::System::IntPtr  wParam, ::System::IntPtr  lParam, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hWnd, msg, wParam, lParam, callback, object);
}
inline ::System::IntPtr GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA* GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA::QOuTPYnzYLAOOXcYJbwGeNSEaFUjA()   {
}
