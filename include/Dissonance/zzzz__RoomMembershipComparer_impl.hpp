#pragma once
// IWYU pragma private; include "Dissonance/RoomMembershipComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__RoomMembershipComparer_def.hpp"
#include "Dissonance/zzzz__RoomMembership_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Dissonance::RoomMembershipComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::RoomMembershipComparer::*)(::Dissonance::RoomMembership, ::Dissonance::RoomMembership)>(&::Dissonance::RoomMembershipComparer::Compare)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cfb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembershipComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Dissonance::RoomMembership>(), ::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomMembershipComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomMembershipComparer::*)()>(&::Dissonance::RoomMembershipComparer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembershipComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Dissonance::RoomMembershipComparer::Compare(::Dissonance::RoomMembership  x, ::Dissonance::RoomMembership  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembershipComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Dissonance::RoomMembership>(), ::i2c::type_of<::Dissonance::RoomMembership>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Dissonance::RoomMembershipComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembershipComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::RoomMembershipComparer* Dissonance::RoomMembershipComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::RoomMembershipComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>"
constexpr  Dissonance::RoomMembershipComparer::operator ::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>"
constexpr ::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>* Dissonance::RoomMembershipComparer::i___System__Collections__Generic__IComparer_1___Dissonance__RoomMembership_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::RoomMembershipComparer::RoomMembershipComparer()   {
}
