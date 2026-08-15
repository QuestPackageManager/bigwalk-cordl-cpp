#pragma once
// IWYU pragma private; include "GlobalNamespace/buKlPqtmstPXzGvEBHKNjCsEPCTJ.hpp"
#include "GlobalNamespace/zzzz__buKlPqtmstPXzGvEBHKNjCsEPCTJ_def.hpp"
#include "GlobalNamespace/zzzz__gEtMTXsHzYASQOaMoKLvLPGCaoDA_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ.QueryInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::gEtMTXsHzYASQOaMoKLvLPGCaoDA (::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::*)(::by_ref<::System::Guid>, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::QueryInterface)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(),
                    {::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ.AddReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::*)()>(&::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::AddReference)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(),
                    {::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::*)()>(&::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(),
                    {::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::gEtMTXsHzYASQOaMoKLvLPGCaoDA GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::QueryInterface(::by_ref<::System::Guid>  guid, ::by_ref<::System::IntPtr>  comObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::gEtMTXsHzYASQOaMoKLvLPGCaoDA>(this, ___internal_method, guid, comObject);
}
inline int32_t GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::AddReference()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::buKlPqtmstPXzGvEBHKNjCsEPCTJ*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
