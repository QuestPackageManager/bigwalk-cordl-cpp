#pragma once
// IWYU pragma private; include "Mirror/NetworkMatch.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Mirror/zzzz__NetworkMatch_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkMatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkMatch::*)()>(&::Mirror::NetworkMatch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkMatch.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkMatch::*)()>(&::Mirror::NetworkMatch::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMatch*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Mirror::NetworkMatch::__cordl_internal_get_matchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr ::System::Guid const& Mirror::NetworkMatch::__cordl_internal_get_matchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchId;
}
constexpr void Mirror::NetworkMatch::__cordl_internal_set_matchId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchId = value;
}
inline void Mirror::NetworkMatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkMatch::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMatch*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkMatch* Mirror::NetworkMatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkMatch*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkMatch::NetworkMatch()   {
}
