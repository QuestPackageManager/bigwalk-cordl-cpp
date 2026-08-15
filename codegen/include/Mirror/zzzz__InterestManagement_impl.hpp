#pragma once
// IWYU pragma private; include "Mirror/InterestManagement.hpp"
#include "Mirror/zzzz__InterestManagementBase_impl.hpp"
#include "Mirror/zzzz__InterestManagement_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Mirror::InterestManagement.OnRebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::InterestManagement::OnRebuildObservers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagement*>(),
                    {::i2c::class_of<::Mirror::InterestManagement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagement.RebuildAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagement::*)()>(&::Mirror::InterestManagement::RebuildAll)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181536810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagement*>(),
                        {"RebuildAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagement.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagement::*)(::Mirror::NetworkIdentity*, bool)>(&::Mirror::InterestManagement::Rebuild)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181536970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::InterestManagement*>(),
                    {::i2c::class_of<::Mirror::InterestManagement*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::InterestManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::InterestManagement::*)()>(&::Mirror::InterestManagement::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181536c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*& Mirror::InterestManagement::__cordl_internal_get_newObservers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newObservers;
}
constexpr ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>* const& Mirror::InterestManagement::__cordl_internal_get_newObservers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newObservers;
}
constexpr void Mirror::InterestManagement::__cordl_internal_set_newObservers(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newObservers = value;
}
inline void Mirror::InterestManagement::OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, newObservers);
}
inline void Mirror::InterestManagement::RebuildAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagement*>(),
                        {"RebuildAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::InterestManagement::Rebuild(::Mirror::NetworkIdentity*  identity, bool  initialize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::InterestManagement*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, initialize);
}
inline void Mirror::InterestManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::InterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::InterestManagement* Mirror::InterestManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::InterestManagement*>());
}
// Ctor Parameters []
constexpr ::Mirror::InterestManagement::InterestManagement()   {
}
