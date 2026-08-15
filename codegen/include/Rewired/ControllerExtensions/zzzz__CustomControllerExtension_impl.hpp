#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/CustomControllerExtension.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__CustomControllerExtension_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerExtensionSource_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::CustomControllerExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::CustomControllerExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::IControllerExtensionSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::CustomControllerExtension::*)(::Rewired::ControllerExtensions::CustomControllerExtension*)>(&::Rewired::ControllerExtensions::CustomControllerExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::CustomControllerExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.OnUpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::CustomControllerExtension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::CustomControllerExtension::OnUpdateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.OnSourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::CustomControllerExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::CustomControllerExtension::OnSourceUpdated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IControllerExtensionSource* (::Rewired::ControllerExtensions::CustomControllerExtension::*)()>(&::Rewired::ControllerExtensions::CustomControllerExtension::GetSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                        {"GetSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.ShallowCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::CustomControllerExtension::*)()>(&::Rewired::ControllerExtensions::CustomControllerExtension::ShallowCopy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::CustomControllerExtension::*)()>(&::Rewired::ControllerExtensions::CustomControllerExtension::Clone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181163b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::CustomControllerExtension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::CustomControllerExtension::UpdateData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ca690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::CustomControllerExtension.SourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::CustomControllerExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::CustomControllerExtension::SourceUpdated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818ca670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr bool& Rewired::ControllerExtensions::CustomControllerExtension::__cordl_internal_get_OgMNoufPdLekiAGIIAuYOtEgBueZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OgMNoufPdLekiAGIIAuYOtEgBueZ;
}
constexpr bool const& Rewired::ControllerExtensions::CustomControllerExtension::__cordl_internal_get_OgMNoufPdLekiAGIIAuYOtEgBueZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OgMNoufPdLekiAGIIAuYOtEgBueZ;
}
constexpr void Rewired::ControllerExtensions::CustomControllerExtension::__cordl_internal_set_OgMNoufPdLekiAGIIAuYOtEgBueZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OgMNoufPdLekiAGIIAuYOtEgBueZ = value;
}
inline void Rewired::ControllerExtensions::CustomControllerExtension::_ctor(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::IControllerExtensionSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::CustomControllerExtension::_ctor(::Rewired::ControllerExtensions::CustomControllerExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::CustomControllerExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::CustomControllerExtension::OnUpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::CustomControllerExtension::OnSourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::Interfaces::IControllerExtensionSource* Rewired::ControllerExtensions::CustomControllerExtension::GetSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(),
                        {"GetSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IControllerExtensionSource*>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::CustomControllerExtension::ShallowCopy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::CustomControllerExtension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::CustomControllerExtension::UpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::CustomControllerExtension::SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::CustomControllerExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::ControllerExtensions::CustomControllerExtension* Rewired::ControllerExtensions::CustomControllerExtension::New_ctor(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::CustomControllerExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::CustomControllerExtension* Rewired::ControllerExtensions::CustomControllerExtension::New_ctor(::Rewired::ControllerExtensions::CustomControllerExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::CustomControllerExtension*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::CustomControllerExtension::CustomControllerExtension()   {
}
